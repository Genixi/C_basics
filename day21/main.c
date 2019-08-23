#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("%d\n", 20& ~4);
	printf("%d\n", (20&8)>0 ?1 :0);//проверка состо€и€ бита
	
	int i=1;
	int n=4;
	
	switch(n) {
		case 1: printf("1"); break;		
		case 2: printf("2"); break;
		case 3: printf("3"); break;
		case 4: printf("4"); break;
		default: printf("?"); break;
	}
	
	
	if(n==0) {}
	
	if (n==4) {}
	else if (n==5) {}
		else if (n==3) {}
			else if (n==2) {}
			
	if (n>5 && ++n>0) {}
	printf("n=%d\n", n);
	
	return 0;
}
