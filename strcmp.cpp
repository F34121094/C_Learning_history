#include<stdio.h>
#include<string.h>

int main(){
	
	char a[80]="hello~";
	char b[80];
	
	//	fgets(b, 80, stdin);		//fgets會將enter也讀入，因此會導致此行程式碼最後多了enter，因此應該使用scanf 
	printf("please type 'hello~'\n");
	scanf("%s",b);
	if (strcmp(a,b)==0){		//要使用strcmp的話，前面要引入<string.h>函式庫 
		printf("the string you type is correct!");
	}
	else{
		printf("wrong!");
	}
	return 0;
}
