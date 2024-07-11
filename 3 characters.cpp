#include<stdio.h>

int main(){
	int i;
	char name[3][80];
	
	for(i = 0 ; i < 3 ; i++){
		printf("please type the No.%d character's name\n", i + 1);
		fgets(name[i], 80, stdin);
	}
	
	for(i = 0 ; i < 3 ; i ++){
		printf("\nthese 3 character's name is %s", name[i]);
	}
	return 0;
}
