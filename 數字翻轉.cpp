#include<stdio.h>
#include<stdlib.h>

int main(){
	int x,ary[10];
	int i=0,ten = 10;
	scanf("%d", &x);
	if(x==0){
		printf("0");
		return 0;
	}
	while(x != 0){
		ary[i] = x % ten;	//ary[0]=6
		x = x - ary[i];  	//[1] x = 123450
		x = x/ten;			//[1] x = 12345
		i++ ;				
	}
//	for(int j=0 ;j<i;j++){
//		while(ary[j])
//		else printf("%d",ary[j]);
//	}
	int j = 0;
	while(ary[j]==0){
		j++;
	}
	
	for(j; j<i;j++){
		printf("%d", ary[j]);
	}
	
	return 0;
}
