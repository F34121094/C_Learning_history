#include<stdio.h>

int main(){
	
	char  c;		//char是儲存字元的一個指令
	 
	c = getchar();
	putchar(c);
	
	printf("\n%d", (int)c);		//將c這個字元強行轉型成整數，找到他的ASCII碼 
	
	return 0;
} 
