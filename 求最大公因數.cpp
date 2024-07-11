//求最大公因數(用輾轉相除法)
#include<stdio.h>
#include<stdlib.h>

int main(){
	int a ,b ,temp;
	scanf("%d %d", &a ,&b);
	
	if(b>a){
		temp = b;
		b = a;
		a = temp;
	}	//讓a一定>b 
//	printf("%d %d", a, b);
	

	if(a == b || a % b == 0){
		printf("%d", b) ;
		return 0;}
		else {
			while(a%b!=0){
			a = a % b;
			temp = a;
			a = b;
			b = temp; 
			}
			printf("%d", b);
			return 0;
		} 
	}

