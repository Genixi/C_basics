#include <stdio.h>
#include <stdlib.h>

#undef M_PI  // переодпредл€ем уже определеннцю переменную
#define M_PI 3.1415
#define Cube(x) x*x*x
#define Swapi(x,y) do{int x##y=x; x=y; y=x##y;}while(0)  //через ## объ€вл€ют внутренние переменные чтобв не совпадала с внешними
#define Name //включает условную компил€цию

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x, y;
	y = 2;
	x=2*M_PI;
	
	x = Cube(y); //идет макроподстановка того что в скобках. Ёкономит врем€ и пам€ть
	printf("%g\n",x);
	
	int n=3, m=-7, tmp=0;
	#ifdef Name
		printf("n=%d tmp=%d m=%d\n",n,tmp,m);
	#endif
	if(n>0) Swapi(n,m);
	else{}
	printf("n=%d m=%d\n", n,m);
	
	#ifdef _WIN64
		printf("windows 64 name=%s\n", __DATE__);
	#endif
	
	return 0;
}
