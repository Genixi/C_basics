#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Empl {
	char *fname1;
//	char fname2[56];
	int age;
	double salary;
};

typedef struct Empl Employee;
void getEmpl(Employee *e);
void printEmpl(Employee *e);

void getEmpl(Employee *e) {
	printf("Input age:");
	scanf("%d",&e->age); //������� �������� ����� � ���� age, & ���������� ��� � ���� age
	
	printf("Input salary:");
	scanf("%lf", &e->salary); //�������� �� ������ scanf
	
	char buf[64];
	printf("Input fname:");
	scanf("%s", buf, 64); //%s ������� �� ������� ����������� �������
	
	//����������� ������ ������
	free(e->fname1);
	e->fname1=malloc(strlen(buf)+1);
	strcpy(e->fname1,buf);
}

void printEmpl(Employee *e) {
	//��� ������� ��������� � ����� ����� ���������� ���� ����� ������������ ���������, ���� ����� ->
	printf("%s age=%d salay=%g",e->fname1, (*e).age, e->salary);
}

int main(int argc, char *argv[]) {
	Employee e1;
	Employee e2 = {0, 0, 0};
	
	printf("size=%d\n", sizeof(e1));
	getEmpl(&e2);
	printEmpl(&e2);
	
	return 0;
}
