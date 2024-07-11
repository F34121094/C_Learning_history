#include<stdio.h>
#include<stdlib.h>

int main(){
	int x;
	int i = 0;
	int ary[20];
	int a = 0, b = 0, c = 0;
	scanf("%d", &x);
	
	for(i; i < x; i++){
		scanf("%d",&ary[i]);
		if(ary[i] % 3 == 0){
			a++;
			continue;
		}else if(ary[i] % 3 == 1){
			b++;
			continue;
		}else if(ary[i] % 3 == 2){
			c++;
			continue;
		}
	}
	printf("%d %d %d ", a, b, c);
	
	return 0;
}
