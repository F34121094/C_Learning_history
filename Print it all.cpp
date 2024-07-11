// >0 integer ¤£¯à %7==0 <n
#include<stdio.h>
#include<stdlib.h>

int main(){
	int n ;
	
	while(1){
		scanf("%d", &n);
		if( n == 0){
			return 0;
		}else{
			for(int i = 1; i<n;i++){
				if(i%7 == 0){
					continue;
				}else printf("%d ", i);
			}
			printf("\n"); 
		}
	}
}

