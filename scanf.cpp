#include <stdio.h>

int main(){
	
	int a;	//cna be writen as (int a, b;), same as int a; int b;
	int b;	//int �����O���鵹�@�ӪŶ�int���n32��bits 
	
	printf("please enter a number which represent a\n");
	scanf("%d", &a);	//%d ���q�����@�ӪŶ���J�A�B��J���ȥN��a 
	printf("\nAnd then enter a number b\n");
	scanf("%d", &b);
	printf("\na is %d,b is %d\n",a ,b);
	
	return 0;
} 
