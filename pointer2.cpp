#include<stdio.h>
#include<string.h>

int main(){
	int x;
	printf("type a number\n");
	scanf("%d", &x);
	
	int* p;
	p = &x;
	
	printf("\nx = %d\n",x);
	printf("&x = %d\n", &x);
	printf("p = %d\n", p);
	printf("*p = %d\n", *p );
	printf("\nsummary-\nx=*p\n&x=p=the memory address\n*�i�H�����ӰO�����m���F��X�����\n&�i�H��ܥX�o�ӪF�誺�O�����m");
	return 0;
}
