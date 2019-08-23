#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int cmp(const void*p1, const void*p2) {
	char* s1 = *(char**)p1;
	char* s2 = *(char**)p2;
	return strcmp(s1, s2);	
}

int main(int argc, char *argv[]) {
	int i=0;
	system("chcp 1251");
//	qsort(&argv[1],argc-1,sizeof(char*),cmp);
//	for(i=1;i<argc;++i) puts(argv[i]);
	
	//список файлов
	FILE *pf=0;
	char name[256];
	system("dir");
	
	//ввод имени файла
	//scanf читат до первого пробела, gets читает до нажатия Enter
	printf("имя файла:");
	fgets(name,256,stdin);
	name[strlen(name) - 1]='\0';
	//fprintf(stdout,"%s.",name);
	
	
	//чтение всего файла
	pf = fopen(name, "rb");
	if(pf==0) {
		puts("Нет файла");
		return -1;
	}
	fseek(pf,0,SEEK_END); //расстояние 0 байтов от окончания файла
	long size=ftell(pf);
	printf("size=%d\n",size); 
		
	char*s = malloc(sizeof(char)*(size+1));
	fseek(pf,0,SEEK_SET); //расстояие 0 байтов от начала файла
	fread(s,1,size,pf);
	s[size]='\0';
	
	
	//печать на экран
	
	puts(s);
	free(s);
	s=0;
	fclose(pf);
	return 0;
}
