#include<stdio.h>

//�D�ءG�p��G���}�C�C�檺�`�M�M������
//���g�@�ӵ{���A�n�D�ϥΪ̿�J�@�� 3x3 ���G����ư}�C�A�M��p��C�檺�`�M�M�����ȡC


int main(){
	int a[3][3];
	int i, j;
	
	printf("you would need to enter a 3*3 two dimensional arrays\n ");
	printf("and this program would give a summation of each row\n");
	
	for(i = 0 ; i < 3 ; i ++){
		printf("\nthis is No.%d row\n\n", i + 1);
		for(j = 0 ; j < 3 ; j ++){
			printf("this is No.%d\n", j + 1);
			printf("type here-");
			scanf("%d", &a[i][j]);
		}
	}
	//���ȧ��� 
	int sum1 = 0;	//�`�Msum �w�q 
	int sum2 = 0;
	int sum3 = 0;
	
	
	for(j = 0 ; j < 3 ; j ++){
		
		sum1 += a[0][j];
		sum2 += a[1][j];
		sum3 += a[2][j];		
	}
	
	printf("\nthe summation of the first row is %d\n", sum1);
	printf("the summation of the second row is %d\n", sum2);
	printf("the summation of the thrid row is %d\n", sum3);
	
	return 0;
}
