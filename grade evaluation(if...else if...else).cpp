#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	
	printf("please type your grade here-");
	scanf("%d", &a);
	printf("\nthis program will show your grading ");
	system("pause");
	
	if(a >= 85 && a <= 100){		//�b��if����P�_�ɡA����g85<=a<=100�o�ؼg�k�A�ӬO�n�� &&(�B)-a>=85 && a<=100 
		printf("\n\nyour grading is A+\ngreat job ");
	}
	else if(a < 85 && a >= 70){
		printf("\n\nyour grading is A\nnice");
	}
	else if(a < 70 && a >= 60){
		printf("\n\nyour grading is B\nkeep going");
	}
	else if(a < 60 && a >= 50){
		printf("\n\nyour grading is C\nA little dangerous");
	}
	else{
		printf("\n\nyour grading is D\nyou should take the remedial course!");
	}
	
	return 0;
} 
