#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));		//�ϥγo�ӵ{���X�����ginclude<time.h> 
							//rand() srand() �t�brand�O���H���ơA���L�C�����檺���G�ۦP�A��srand�h�O���P�� �A��srand(time(NULL))�h�Q�Υثe���ɶ��Ӳ����H���ܼơA�G��C�����ͪ��ȯu���H���� 
	int answer = rand() % 100 + 1;
	int attempt, a;
	
	printf("welcome to the Bulls & Cows\nthe system will produce a random number in the interval from 1 to 100\nand your goal is to guess the number correctly\n");
	
	while(1){
		printf("\ntype your answer here-");
		scanf("%d", &a);
		attempt++;
		
		if( a== answer){
			printf("\ncongradulation! the answer is %d!",answer);
			printf("\nyou try %d times to win this game", attempt);
			return 0;
		}
		else if (a < answer){
			printf("\n\nlower than the answer, try again");
		}
		else{
			printf("\n\nhigher than the answer, try again");
		}	
		}
	}

