#include<stdio.h>
//這裡練習陣列 a[] 
int main(){
	
	double a[10];	//a[1] a[2] a[3]...
	
	int i ;
	for( i = 0 ; i < 10 ; i++ ){
		
		printf("please type No.%d number:", i + 1);
		scanf("%lf", &a[i]);	//%lf是字母的"L"加f，不是數字1 (double要配合使用%lf) 
	}
	
	double sum = 0;
	for( i = 0 ; i < 10 ; i ++ ){
		
		sum += a[i];	
		/*sum+=i 意思為sum原本的值，再加上一個i的附值上去，例如a[i=0]時為10,
		即sum=0 + a[0]=10 ,  然後sum就會被記為10, 然後sum再繼續去家剩下的i*/ 
	}
	
	printf("\nthe sum of these ten number is %.1lf", sum);
	printf("\nthe average of these ten number is %.1lf", sum/10.0);	//輸入%.1f能僅輸出一位小數 (為四捨五入)
	printf("\n(the result is rounded)") ;
	
	return 0;
}
