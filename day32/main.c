#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double d=4.7;
	long* pl=0;
	void* pv=0;
	double* pd = &d;
	//pd++;
	printf("%X %X \n", pd, &d);
	*pd = 7.3; //отправить по адресу в pd. Записываем 7.3 в d
	printf("%g %g \n",d,*pd); // *pd получить данные из адреса pd
	
	pv=&d;
	pl=&d;
	printf("%X %X %X \n", pd, pv, pl);
	printf("d=%g\n", *pd);
	printf("d=%g\n", *(double*)pl);
	printf("d=%g\n", *(double*)pv);
	
	return 0;
}
