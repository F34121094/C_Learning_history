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
	printf("\nsummary-\nx=*p\n&x=p=the memory address\n*可以提取該記憶體位置的東西出來顯示\n&可以顯示出這個東西的記憶體位置");
	return 0;
}
