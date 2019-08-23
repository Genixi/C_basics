#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j=0;
	
	while(j<=55) {
		switch(j) {
			case '\n': printf("%4d - \\n\n", j); break;
			case '\t': printf("%4d - \\t\n", j); break;
			case '\a': printf("%4d - \\a\n", j); break;
			case '\v': printf("%4d - \\v\n", j); break;
			case '\r': printf("%4d - \\r\n", j); break;
			case '\0': printf("%4d - \\0\n", j); break;
			case '\b': printf("%4d - \\b\n", j); break;
			case ' ': printf("%4d - space\n", j); break;
			default: printf("%4d - %c\n", j, j); break;		
		}
		++j;
	}
	
	int z=1;

	for(int i=0; i<=55; ++i,++z) {
		switch(i) {
			case '\n': printf("%4d - \\n\n", i); break;
			case '\t': printf("%4d - \\t\n", i); break;
			case '\a': printf("%4d - \\a\n", i); break;
			case '\v': printf("%4d - \\v\n", i); break;
			case '\r': printf("%4d - \\r\n", i); break;
			case '\0': printf("%4d - \\0\n", i); break;
			case '\b': printf("%4d - \\b\n", i); break;
			case ' ': printf("%4d - space\n", i); break;
			default: printf("%4d - %c\n", i, i); break;		
		}
		++i;	
	}
	return 0;
}
