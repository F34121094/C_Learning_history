#include<stdio.h>

double aver(double a[], double n){
	double sum = 0;
	double average;
	for(int i = 0 ; i < n ; i ++){
		sum += a[i];
	}
	average = sum / n;
	return average;
}
	

int main(){
	int i;
	double n;
	printf("please type the number of students\n");
	scanf("%lf", &n);
	
	double a[50];
	
	for(i = 0 ; i < n ; i ++){
		printf("type the No.%d students' grade-", i + 1);
		scanf("%lf", &a[i]);
	}
	double average = aver(a, n);
	printf("the average is %.4lf", average);
	
	return 0;
}
