#include <stdio.h>
#include <stdlib.h>

//Найти функцию которая ищет подстроку


int main(int argc, char *argv[]) {
	//создаем поток на запись
//	int i=0;
//	FILE *pf=fopen("data.txt","w");
//	double data[5]={4,9,1,3,7.1};
//	for(i=0;i<5;++i) {
//		fprintf(pf,"%g  ", data[i]);
//	}
	
	//fwrite(data,sizeof(double),5,pf);
	//fwrite пишет только в байтах
	
	//создаем на чтение
	double d;
	char buf[64];
	FILE* pf = fopen("data.txt","r");
	while(1) {
		if(fscanf(pf,"%s",buf)<1) {
			break;
		}
//		puts(buf);
		
		d=atof(buf);
		printf("%g\n",d);
		
//		if(fscanf(pf,"%lf",&d)<1) {
//			break;
//		}
//		printf("%g\n",d);				
	}
	
	fclose(pf);
	return 0;
}
