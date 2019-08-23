#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void bsort(int d[], int n); 
void putArray(int d[], int n);
void initArray(int d[], int n);
double average(int d[], int n);		

int main(int argc, char *argv[]) {
	const int num=35;
	int dat2[num]; // для таких массивов нет инициализации
	int data[SIZE] = {1,4 ,3,[5]=-17}; //остальные будут заполненны нулями
	data[7] = -3;
	data[8] = -5;
	
	printf("%lld\n",sizeof(data)); //sizeof работает только там где массив был объявлен
	initArray(dat2, num);
	bsort(dat2,num);
	putArray(dat2, num);
	printf("\navr = %g", average(data, SIZE));
	return 0;
}

void bsort(int d[], int n) {
	int i, j, flag;
	int tmp;
	
	for(i=1; i<=n-1; ++i) {
		flag=0;
		for(j=0; j<n-i; ++j) {
			if(d[j]>d[j+1]) {
				if(d[j]>d[j+1]) {
					flag=1;
					tmp=d[j];
					d[j]=d[j+1];
					d[j+1]=tmp;
				}
			}
		}
		if(flag==0) {printf("i=%d\n\n",i); break;}
	}
	
}

double average(int d[], int n) {
	double res;
	double sum;
	int i=0;
	for (i=0; i<n; ++i) {
		sum += d[i];
	}
	res = sum / n;
	return res;	
}

void initArray(int d[], int n) {
	int i=0;
	srand(time(0));
	for(i=0; i<n; ++i) d[i] = rand();
}

void putArray(int d[], int n) {
	int i=0;
	for(i=0; i<n; ++i)	printf("%9d",d[i]);
}


