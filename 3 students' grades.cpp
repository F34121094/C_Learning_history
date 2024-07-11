#include<stdio.h>

int main(){

	int a[3];
	int i;
		
	printf("please type 3 students' grades\n");
	
	for (i = 0 ; i < 3 ; i++){
	printf("No.%d:\n",i + 1);
	scanf("%d", &a[i]);
	}
	
	printf("these 3 students' grades is-");

	for ( i = 0 ; i < 3 ; i ++){
		printf("\nNo.%d:%d",i + 1 , a[i]);
	}
	
	double sum = 0;
	for( i = 0 ; i < 3 ; i++){
		 sum += a[i];
	}
	printf("\n\nthe average of these 3 students is %lf", sum / 3);
	return 0;
} 
