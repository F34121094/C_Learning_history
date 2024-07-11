#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));		//使用這個程式碼必須寫include<time.h> 
							//rand() srand() 差在rand是偽隨機數，其實他每次執行的結果相同，但srand則是不同的 ，而srand(time(NULL))則利用目前的時間來產生隨機變數，故其每次產生的值真的隨機的 
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

