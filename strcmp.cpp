#include<stdio.h>
#include<string.h>

int main(){
	
	char a[80]="hello~";
	char b[80];
	
	//	fgets(b, 80, stdin);		//fgets�|�Nenter�]Ū�J�A�]���|�ɭP����{���X�̫�h�Fenter�A�]�����Өϥ�scanf 
	printf("please type 'hello~'\n");
	scanf("%s",b);
	if (strcmp(a,b)==0){		//�n�ϥ�strcmp���ܡA�e���n�ޤJ<string.h>�禡�w 
		printf("the string you type is correct!");
	}
	else{
		printf("wrong!");
	}
	return 0;
}
