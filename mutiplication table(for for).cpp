#include<stdio.h>

int main(){
	
	int i, j;
	int sum;
	
	for(i = 1; i <= 9; i++ ){		//�ϥ�for�j��ɡA�n�`�N�j�A������m�μƶq 
		printf("\n");
		for(j = 1; j <= 5; j++){		//�Nj��5�@�����j�Ϩ䤣�|�Ӫ� 
			sum = i * j;
			printf("%d * %d = %d\t", j, i, sum);		//\t�ಣ���Y�ƪ��ĪG 
		}
	}	
	
	printf("\n");
	
	for(i = 1; i <= 9; i++ ){
		printf("\n");
		for(j = 6; j <= 9; j++){
			sum = i * j;
			printf("%d * %d = %d\t", j, i, sum);
		}
		
	}

	
	return 0;
}
