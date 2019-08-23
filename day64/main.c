#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct Goods {
	char name[32];
	double price;
	int num;
};

struct Goods* getGoods() {
	struct Goods g;
	g.num = 100;
	fflush(stdin); //очистка буфера потока от преыдущих застрявших символов
	printf("input name:"); //scanf читает до пробела - не можем его использовать
	gets(g.name);
	printf("\t price:");
	scanf("%lf",&g.price);
	
	struct Goods *p=malloc(sizeof(g));
	*p = g;
	return p;	
}

void putGoods(void *p) {
	struct Goods g = *(struct Goods*)p;
	printf("%s $=%g %d\n",g.name,g.price,g.num);
}

int main(int argc, char *argv[]) {
	int n=3;
A:	printf("1.add\n2.delete\n3.size\n4.find\n5.save\n6.print\n7.exit\n");
	printf("Choose 1-7:");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			add(getGoods());
			break;
		case 2:
			break;
		case 3:
			printf("size=%d\n", size());
			break;	
		case 4:
			break;		
		case 5:
			save("goods.txt", sizeof(struct Goods));
			break;
		case 6:
			print(putGoods);
			break;
		case 7:
			return 0;		
	}
	goto A;
	return 0;
}
