#include<stdio.h>
#include<string.h>

int main(){
	
	char a[80];
	
	printf("type a string-\n");
	fgets(a, 80, stdin);
	printf("the string you type is-\n%s",a );
	size_t l= strlen(a);		//size_t�Ostrlen�{���X���@�өw�q�u�� 
	printf("and the total characters you use is %d",l - 1);		//�p��r���ɷ|��̫᪺enter�]��i�h�A�G����1 
	
	return 0;
} 
