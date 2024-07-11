#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int a = 0; a<n; a++){
		int number, ans = 1, get ;
		scanf("%d", &number);
		if(number == 0){
			printf("0\n");
			continue;
		}
//		printf("%d", number);
		while(number != 0){
			get =  number % 10;
			ans = ans * get;
			number = (number - get)/10;  
		}
		printf("%d\n", ans);
	}
	return 0;
}
