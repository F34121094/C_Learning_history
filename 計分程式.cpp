#include<stdio.h>
#include<stdlib.h> 

int main(){
	int n ;
	scanf("%d", &n);
	if(n<=10){
		printf("%d", n*6);
	}else if(n>10 && n<=20){
		printf("%d", 60+(n-10)*2);
	}else if(n>20 && n<=40){
		printf("%d", 80+(n-20)*1);
	}else printf("100");
	
	return 0;
}
