#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	
	printf("please enter your height here-");
	scanf("%d", &a);
	printf("\nhere is your height-%d", a);
	printf("\ncompare your height to the world average height (173.1)");
	
	system("pause");
	if( a >= 173.1){
		printf("\ntaller than average");
	}
	else{
		printf("\nshorter than average");
	}
	
	return 0;
} 
