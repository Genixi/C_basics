#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

static int count=0;
static LinkedList *begin=0, *end=0;

void save(char *s, int n) {
	LinkedList *p=begin; // p будет итератором чтобы идти по списку
	FILE *pFile = fopen(s,"w"); //s - имя файла
	
	while(p!=0) {
		fwrite(p->data,n,1,pFile);	
		p = p->pnext;		
	}
	fclose(pFile);
}

void print(void (*pf)(void *p)) {
	LinkedList *p=begin; // p будет итератором чтобы идти по списку
	while(p!=0) {
		//печать
		pf(p->data);
		p = p->pnext;		
	}
}

int size(void) {
	return count;
}

void add(void* item) {
	LinkedList *p=malloc(sizeof(LinkedList));
	//если память выделенна
	if(p!=0) {
		p->data = item;
		p->pnext = 0;
		p->pprev = 0;
		if(begin==0) {
			begin = end = p;
			count++;
		} else {
			end->pnext=p;
			p->pprev=end;
			end=p;
			count++;
		}		
	}	
}
