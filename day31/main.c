#include <stdio.h>
#include <stdlib.h>
void swap(int* pn, int* pm);
long long factorial1(int);
long long factorial2(int);

inline int cubei(int x) {return x*x*x;}
inline float cubef(float x) {return x*x*x;}
inline double cubed(double x) {return x*x*x;}

#define cube(x) _Generic((x), int:cubei,   \
						      float:cubef, \
						      double:cubed)((x))

void swap(int* pn, int* pm) {
	if (pn==0 || pm==0) return;
	
	int tmp = *pn; //разименование  - берем/кладем переменную по адресу хранящегося в pn
	*pn = *pm;
	*pm = tmp;		
}

int main(int argc, char *argv[]) {
	int a=7, b=5;
	swap(&a, &b);
	printf("a=%d b=%d %g\n",a,b,cube(3.1));
	
//	int i=0;
//	while(i < 22) {
//		printf("%3d %lld\n",i,factorial2(i));
//		i++;
//	}	
	return 0;
}

long long factorial2(int n) {
	return n==0 ? 1: n*factorial2(n-1);
}

long long factorial1(int n) {
	long long res=1;
	
	if(n < 0) res = -1;
	else {
		int i=1;
		while(i <= n) {
			res *= i;
			i++;
		}
	}
	
	return res;		
}


