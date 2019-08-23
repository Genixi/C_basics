#include <stdio.h>
#include <stdlib.h>
#define ROW 10
#define COL 10

typedef unsigned long* pulong;
double* dMatrix(int row, int col);
void print2M(double d[][3], int row, int col);
void print2M2(void *p, int row, int col);


int main(int argc, char *argv[]) {
	
	pulong pn=0;
	
//	double* p=0;
//	p=malloc(100000000*sizeof(double));
//	if(p==0) {
//		printf("no memory!");
//		return -1;
//	}
//	
//	p[0]=15;
//	
//	printf("%X ",p);
//	
//	p=realloc(p, 100010000*sizeof(double));	
//	printf("%X",p);
//	
//	//printf("ok");
//	free(p);
//	p=0; // хороший тон, освобождаем указатель после освобождеия памяти
	int i,j;
	double* pd=dMatrix(ROW, COL);
	for(i=0; i<ROW; ++i) {
		for(j=0; j<COL; ++j) printf("%5.2f", *(pd+COL*i+j));
		printf("\n");
	}
	
	double d2[2][4] = {{3,7,9,11}, {-1,-2,-3,-5}};
	print2M2(d2,2,4);	
	
	return 0;
}

void print2M(double d[][3], int row, int col) {
	int i,j;
	for(i=0; i<row; ++i) {
		for(j=0; j<col; ++j) printf("%5.1f", d[i][j]);
		printf("\n");
	}
		
}

void print2M2(void *p, int row, int col) {
	int i,j;
	double (*d)[col]=p;
	
	printf("\n");
	for(i=0; i<row; ++i) {
		for(j=0; j<col; ++j) printf("%5.1f", d[i][j]);
		printf("\n");
	}
		
}

double* dMatrix(int row, int col) {
	double* p=calloc(row*col, sizeof(double));
	if(p==0) {
		printf("no memory!");
		return 0;
	}	
	
	int i,j=0,n=(row<col)?row:col;
	for(i=0;i<n;++i,j=j+col+1) *(p+j)=1;
	
	return p;
}


