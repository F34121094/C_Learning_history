#include<stdio.h>
#include<stdlib.h>

int main(){
	int ary[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char phone[20];
	gets(phone);
	int num = (int)phone[0]-65;	//ary可以顯示出 第一個字母的數字 
//	printf("%d", ary[num]);

	return 0;
} 
