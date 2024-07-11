#include<stdio.h>
#include<stdlib.h>

int main(){
	char pw[15];
	gets(pw);
	
	for(int i = 0 ; i <6; i++){
		if((int)pw[i+1]>(int)pw[i]){
			printf("%d", (int)pw[i+1]-(int)pw[i]);
		}else{
			printf("%d", (int)pw[i]-(int)pw[i+1]);
		}
	}
	return 0;
} 
