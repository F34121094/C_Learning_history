#include<stdio.h>


int main(){
	
	int n, i ;
	double sum = 0;
	
	printf("This is a series calculator of S=1/1+1/2+1/3+...+1/n\nplease type your n here-");
	scanf("%d", &n);		//scanf�n�O�o�����ϥ�&�Ө��� 
	
	for (i = 1; i <= n; i++){		//�n�i�J�j��ݨϥ�<=�~��ŦX 
		sum = sum + 1.0 / i ;		//�n�O�o�ϥ�1.0�~��T�O�B�I�ƪ����k 
	}
	
	printf("\nthe result is %f", sum);
	
	return 0;
}
