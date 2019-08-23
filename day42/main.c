#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static int number; // глобальная переменная которую видно только в этом файле

int cmp(const void* p1, const void* p2);
int cmp2(const void* p1, const void* p2);


int main(int argc, char *argv[]) {
	double d[5]={27};
	printf("%X %X %X\n",d,&d,&d[0]);
	
	double* p=d;
	//d[i] = *(d+i)=i[d];
	0[d]=12; // меняем нулевой элемент массива
	
	int d2[2][4];
	int(*p2)[4]=d2;
	
	printf("%X %X\n",&sin,sin);
	//doble sin(double) - прототип сиуса
	double (*pf)(double); //указатель на функцию которая получает double и возвращает duble
	pf=sin;
	
	int i;
	double dd[10]={5,2,8,11,23,4,8,9,21,1};
	qsort(dd, 10, sizeof(double), cmp2);
	for(i=0;i<10;++i) printf("%g ",dd[i]);
		
	return 0;
}


int cmp2(const void* p1, const void* p2) {
	return -cmp(p1,p2);	
}

int cmp(const void* p1, const void* p2) {
	double a= *(double*)p1;
	double b=*(double*)p2;
	int res=0;
	if(a>b) res=1;
	else if(a<b) res=-1;
	
	return res;	
}
