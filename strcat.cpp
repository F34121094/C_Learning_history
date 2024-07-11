#include<stdio.h>
#include<string.h>

int main(){
	
	char a[80]="Hi!";
	char b[80]=" how are you?";
	
	strcat(a,b);
	
	printf("%s",a);
	
	return 0;
}
