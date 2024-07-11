#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
		while(scanf("%d", &n) != EOF){
			int ary[1001];
		for(int i = 0 ; i < n ; i ++){
			scanf("%d", &ary[i]);
		}
		int temp;
		
		for(int i = n -1; i>=0; i--){
			for(int j = 0 ; j< i; j++){
				if(ary[j]>ary[j+1]){
					temp = ary[j];
					ary[j] = ary[j+1];
					ary[j+1] = temp;
				}
			}
		}
		
		for(int i = 0 ; i < n ; i ++){
			printf("%d ", ary[i]);
		}
	}
	
	return 0;
} 
