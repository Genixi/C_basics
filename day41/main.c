#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void minMax(int d[], int n, int* pmin, int* pmax) {
	int i=0, min, max;
	if(pmin==0 || pmax==0 || d==0) return;
	if(n<1) return;
	min=max=d[0];
	for(;i < n; ++i) {
		if(d[i]<min) min = d[i];
		if(d[i]>max) max = d[i];
	}
	*pmin=min;
	*pmax=max;
}

int main(int argc, char *argv[]) {
	int d[] = {5, 8, 1, 19, 4};
	int min=0, max=0;
	
	minMax(d, 5, &min, &max);
	printf("%d %d\n", min, max);		
	return 0;
}
