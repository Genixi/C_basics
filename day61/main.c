#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> // библиотека работы с функциями переменной длины

//три точки говорят что на воде любое кол-во аргументов

double add(int n,...) {
	int i=0;
	double s=0;
	va_list p;
	va_start(p, n);
	while(i<n) {
		s+=va_arg(p,double);
		++i;
	}
	va_end(p);
	return s;
}

//создаем новый тип данных - перечисление. Могут принимать только целые значения
enum WD {mon=6, tue, wen, thu, fri=5, sut, sun};

int main(int argc, char *argv[]) {
	double a=5, b=3.1;
	printf("%g\n", add(4, a, b, 9.0, 1.0));
	
	enum WD day=mon;
	if(day==mon) {
		printf("yes\n");
	}
	printf("day=%d\n",day);
	
	
	return 0;
}
