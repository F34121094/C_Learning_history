#include<stdio.h>

int main(){
	
	//���C�j�p
	int size;
	int x;
	
	//�Τ@��do if while���j�鰵�@�ӫ�1�~���~����檺�{���X 
	do{
		printf("please enter the size of your arrary\n");
		scanf("%d", &size);
		printf("your arrary size is:%d\nif this number is correct type '1'", size);
		scanf("%d", &x);
	if(x != 1){		//�T�{�Ʀr 
	printf("please enter the size of your arrary again\n");
	scanf("%d", &size);
	printf("your arrary size is:%d\nif this number is correct type '1'", size);
	scanf("%d", &x);
		}
	}	
	while (x != 1);
	printf("please type the elements here-\n");

			
		//���}�C�Ʀr 
	double a[size];
	int i;
		
	for(i = 0 ; i < size ; i ++){
		printf("No.%d:", i + 1);
		scanf("%lf", &a[i]);
		}
	//�}�C�`�M�D���� 
	double sum = 0;		//sun�n�O�o�[=0 ���M�q���|�����D����h�� 
	for(i = 0 ; i < size ; i ++){
		sum += a[i];
	}

	printf("the sum is %.lf", sum);
	printf("\nthe average is %lf", sum / size);
	
	return 0;
}

