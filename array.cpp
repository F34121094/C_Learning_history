#include<stdio.h>
//�o�̽m�߰}�C a[] 
int main(){
	
	double a[10];	//a[1] a[2] a[3]...
	
	int i ;
	for( i = 0 ; i < 10 ; i++ ){
		
		printf("please type No.%d number:", i + 1);
		scanf("%lf", &a[i]);	//%lf�O�r����"L"�[f�A���O�Ʀr1 (double�n�t�X�ϥ�%lf) 
	}
	
	double sum = 0;
	for( i = 0 ; i < 10 ; i ++ ){
		
		sum += a[i];	
		/*sum+=i �N�䬰sum�쥻���ȡA�A�[�W�@��i�����ȤW�h�A�Ҧpa[i=0]�ɬ�10,
		�Ysum=0 + a[0]=10 ,  �M��sum�N�|�Q�O��10, �M��sum�A�~��h�a�ѤU��i*/ 
	}
	
	printf("\nthe sum of these ten number is %.1lf", sum);
	printf("\nthe average of these ten number is %.1lf", sum/10.0);	//��J%.1f��ȿ�X�@��p�� (���|�ˤ��J)
	printf("\n(the result is rounded)") ;
	
	return 0;
}
