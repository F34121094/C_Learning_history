#include<stdio.h>
#include<string.h>

int main(){
	
	char a[80];
	
	printf("type a string-\n");
	fgets(a, 80, stdin);
	printf("the string you type is-\n%s",a );
	size_t l= strlen(a);		//size_t是strlen程式碼的一個定義工具 
	printf("and the total characters you use is %d",l - 1);		//計算字元時會把最後的enter也算進去，故須減1 
	
	return 0;
} 
