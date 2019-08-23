#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cmp(const void*p1, const void*p2) {
	int res=0;
	int a=*(int*)p1, b=*(int*)p2;
	
	if(a%2==0 && b%2==0) res=a-b;
	if(a%2!=0 && b%2!=0) res=b-a;
	if(a%2==0 && b%2!=0) res=-1;
	if(a%2!=0 && b%2==0) res=+1;
	return res;	
}


int main(int argc, char *argv[]) {
	int i=0;
	int data[] = {7,3,5,2,8,1,4,8,7,9};
	qsort(data,9,sizeof(int),cmp);
	for(;i<9;++i) printf("%d ", data[i]);
	return 0;
}
