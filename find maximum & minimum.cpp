#include<stdio.h>

int main(){
	
	int size;		//�ϥΪ̿�J�}�C�� 
	
	printf("please enter the size of this array:\n");
	scanf("%d", &size);
	printf("your array size is:%d\n", size);
	
	
	int i;
	int a[size];		//�}�C�������@�ӼƬO �N��q���n���o�Ӱ}�C�X�ӪŶ�
						//�G���A���������i�A�]���o�˨C�����|�� 
		//��J�}�C�ƥ� 
	printf("please enter elements of the arrary\n");
	for(i = 0 ; i < size ; i ++){
		//���C�j����Ʀr
		printf("No.%d number:", i + 1);
		scanf("%d", &a[i]); 
	}
	
	int max = a[0];
	for(i = 1 ; i < size ; i ++){
		if(a[i] > max){
			max = a[i];
		}
	}
	
	int j;
	int mini = a[0];
	for(j = 1 ; j < size ; j ++){
		if(a[j] < mini){
			mini = a[j];
		}
	}
	printf("\nthe maximum is %d\n", max);
	printf("the minimum is %d", mini);
	return 0;
	
}
