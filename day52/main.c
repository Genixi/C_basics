#include <stdio.h>
#include <stdlib.h>
int mylen(char*s);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* myadd(char*s1, char*s2, int s1Size) {
	int n1=mylen(s1);
	int n2=mylen(s2);
	int n=n1+n2+1;
	//char s3[n];
	if(n>s1Size) return s1;
	int i=0;
	for(;i<=n2;++i){
		s1[n1+i] = s2[i];
	}
	
	return s1;		
}

char* myupcase(char*s) {
	if(s==0) return s;
	int i = 0;
	int n=mylen(s);
	for(; i <n; ++i) {
		if(s[i]>='a' && s[i]<='z') s[i]+='A'-'a'; 
	}
	return s;	
}

int mylen(char*s){
	if (s==0) return -1;
	int i=0;
	while(s[i]!=0){
		i+=1;
	}
	return i;		
}

int main(int argc, char *argv[]) {
	char s1[]={'h','e','l','p'};
	char s2[20]="help 123"; // "help" - литерал отдельно храниться в памяти
	char*s3 ="help";
	//s2[0]='H';
	//s2 - хранит копию help, s3 хранит указатель на "help"
	
	printf("%s %s\n",s2,myupcase(s2));
	printf("%s\n",myadd(s2,s3,20));
	
	return 0;
} 
