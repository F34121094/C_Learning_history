#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	int *pointer;		
	
	printf("please type number of words\n");
	scanf("%d", &n);
	
	pointer = (int*)malloc(sizeof(int)*n);	//sizeof(int)���O����*n���ݭn�h�֭ӰO���� 
											//malloc�h���@�ӫ��СA�N��s�^pointer�� 
	
	int i;
	for (i = 0 ; i < n ; i ++ ){
		printf("the No.%d number is ",i + 1);
		scanf("%d", &pointer[i]);		//�n�O�oscanf�᭱�n�[&���J���ƭȦs��ӰO���骺��m 
	}									//pointer[i] = (pointer + i)�b�o�ӰO�����m�A���䤤���ȥX�� 
	
	int sum = 0;		//�O�o�n�w�qsum = 0 
	for(i = 0 ; i < n ; i ++){
	sum += pointer[i];
	}
	
	printf("sum is %d", sum);
	
	free(pointer);
	return 0;
} 
