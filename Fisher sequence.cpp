#include<stdio.h>
// this is a Fisher Sequence
int f(int n){
	if ( n == 0){
		return 0;		
//return 1 的意思是直接把1帶回去呼叫這個函式的地方，在這個程式中，呼叫這個函式的地方是在f(n)，
//因此如果n = 0 或 1 ，f(n)將會直接顯示1 
	}
	if( n == 1){
		return 1;
	}
	
	return f(n - 1) + f(n - 2);
}

int main(){
	int n;
	printf("please type a number\n");
	scanf("%d", &n);
	if (f(n) == 0){
		printf("doesn't exist");
	}
	else{
		printf("the result is %d", f(n));
	}
	return 0;
}
