#include<stdio.h>

int sum(int n){		//sum�禡�An�N���Oa��b�������� 
	int total = 0;
	int i;
	for(i = 0 ; i <= n ; i ++){
		total += i;
	}
	
	return total;		//�N��X�Ӫ��o��total�Ȫ�^��sum�̭��p�� 
}

int main(){		//�D�禡 
	
	int a, b;
	scanf("%d%d", &a, &b);
	double sumA = sum(a); 
	double sumB = sum(b); 	//�O�o�w�qsum = 0 
	printf("sumA = %d , sumB = %d\n", sumA, sumB );
	printf("sumA + sumB = %.lf\n", sumA + sumB);
	printf("sumA - sumB = %.lf\n", sumA - sumB);
	printf("sumA * sumB = %.lf\n", sumA * sumB);
	printf("sumA / sumB = %.4lf\n", sumA / sumB);

	return 0;
} 
