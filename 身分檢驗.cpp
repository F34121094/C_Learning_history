#include<stdio.h>
#include<stdlib.h>
 

int main(){
	int id[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char ary[12];
	scanf("%s", &ary);
	int first = id[(int)ary[0] - 65]; 
	//求第一個
	int a = first / 10;
	
	int b = (first % 10) * 9;  
	
	int sum = 0;
	
	for(int i = 1; i < 9;i++){
		sum = sum + (int)(ary[i]-48) * (9 - i);
	}
	sum = sum + (int)(ary[9]-48);
	int total = a + b + sum;
	if(total%10==0){
		printf("real");
	}else printf("fake");
	
	return 0;
}
