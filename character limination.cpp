#include<stdio.h>

int main(){
	
	char a[6];		//char�������A���Ʀr��1�Y���iŪ�����r���ƥ� 
	
	printf("please type your character's name (the limit is 5 words)\n");
	fgets(a, 6, stdin);		//�u���J5�Ӧr�� 
	puts(a);
	
	return 0;
}
