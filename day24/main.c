#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int root2(double b, double c) {
	int n=2;
	double d=b*b-4*c;
	
	if(d>0) {
		double x1,x2;
		x1 = (-b-sqrt(d))/2;
		x2 = (-b+sqrt(d))/2;
		printf("%g  %g\n", x1, x2);
	}
	else if(d<0) {n=0;}
		else {
			n=1;
			printf("%g\n", -b/2);		
		}		
	return 2;
}

int main(int argc, char *argv[]) {
	int n;
	double b,c;
	printf("input b,c (a=1): \n");
	scanf("%lg %lg", &b, &c);
	printf("%g %g\n", b,c);
	
	n=root2(b,c);
	printf("n=%d\n", n);
	return 0;
}
