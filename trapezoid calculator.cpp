#include <stdio.h>

int main(){
	
	int a, b, c;
	int Area;
	
	printf("this is a trapezoid calculator\n");
	printf("please type your upper side of trapezoid\n");
	scanf("%d", &a);
	printf("\ntype your lower side\n") ;
	scanf("%d", &b);
	printf("\nAnd type your height\n");
	scanf("%d", &c);
	printf("\nupper side is %d, lower side is %d, height is %d", a, b, c);
	
	Area = ( a + b ) / 2 * c;
	
	printf("\n\nthe Area is %d", Area);
	
	return 0;
} 
