#include<stdio.h>
#include<string.h>

int main(){
	int *p;
	int x = 70;
	
	p = &x;
	printf("%p", (void*)p);
	
	return 0;
} 
