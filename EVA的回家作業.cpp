#include<stdio.h>
#include<stdlib.h>

int main(){
	int a ;
	scanf("%d", &a);
	
	for(int i = 0;i < a ; i++){
		int ary[5];
		scanf("%d %d %d %d",&ary[0],&ary[1],&ary[2],&ary[3] );
		
		if(ary[3]-ary[2]==ary[2]-ary[1]){
			int d = ary[3]-ary[2];
			printf("%d %d %d %d %d\n", ary[0],ary[1],ary[2],ary[3], ary[3]+d);
		}else{
			int m = ary[3]/ary[2];
			printf("%d %d %d %d %d\n",ary[0],ary[1],ary[2],ary[3], ary[3]*m);
		}
	}
	return 0;
}
