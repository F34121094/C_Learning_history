#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	
	printf("please type number of words\n");
	scanf("%d", &n);
	
	int array[n];		//�٨S�ǹL�ʺA�O����t���ɡA�i�H���w�q�n�ܦh�ӰO����A�קK��ɭԪŶ����� 
	int i;				//�]�i�H������array��b���Dn�ȬO�h�֪��᭱�A�{���Y�i�B�� 
	
	for (i = 0 ; i < n ; i ++ ){
		printf("the No.%d number is ",i + 1);
		scanf("%d", &array[i]);		//�n�O�oscanf�᭱�n�[&���J���ƭȦs��ӰO���骺��m 
	}
	
	int sum = 0;		//�O�o�n�w�qsum = 0 
	for(i = 0 ; i < n ; i ++){
	sum += array[i];
	}
	
	printf("sum is %d", sum);
	
	return 0;
} 
