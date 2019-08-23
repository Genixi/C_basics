#include <stdio.h>
#include <stdlib.h>

//тип данных для экономии памяти
union ARGB {
	unsigned char c[4];
	int color;
};

int main(int argc, char *argv[]) {
	printf("size=%d\n",sizeof(union ARGB));
	
	union ARGB col;
	col.color = 0x00cea877;
	printf("%d %d %d %d\n", col.c[0], col.c[1], col.c[2], col.c[3]);
	col.c[1]=255;
	printf("%d %d %d %d\n", col.c[0], col.c[1], col.c[2], col.c[3]);
	
	return 0;
}
