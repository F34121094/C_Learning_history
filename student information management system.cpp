//學生資料管理系統
#include<stdio.h>

struct student{
	char name[100];		//因為這個是字串，所以要給他一個中括號才會有足夠的記憶體 
	int age;
	char studentID[100];
	int chinesescore;
	int mathscore;
	int englishscore;
};  

typedef struct student a;		//這裡可以用typedef把struct student轉成a 

int main(){
	a s[2] = {		//結構陣列初始化的地方是使用 = 但其實不用也可以，但會有黃色的警告字 
		{"Willy", 19, "F34121094", 44, 65, 100},
		{"Angel", 18, "A09201629", 74, 12, 88},
	};
	
	for (int i = 0 ; i < 2 ; i ++){
		printf("Name:%s\n",s[i].name);		//要叫出char的記憶體必須使用%s來叫 
		printf("Age:%d\n",s[i].age);
		printf("StudentID:%s\n",s[i].studentID);
		printf("Chinese Score:%d\n",s[i].chinesescore);
		printf("Math Score:%d\n",s[i].mathscore);
		printf("English Score:%d\n",s[i].englishscore);
		printf("\n");
	}
	
	printf("chinese Score-\n");
	for (int i = 0 ; i < 2 ; i ++){
		if ( s[i].chinesescore >= 60 ){
			printf("%s-Pass\n", s[i].name);
		}else{
			printf("%s-Fail\n", s[i].name);
		}
	}
	printf("\nMath Score-\n");
	for (int i = 0 ; i < 2 ; i ++){
		if ( s[i].mathscore >= 60 ){
			printf("%s-Pass\n", s[i].name);
		}else{
			printf("%s-Fail\n", s[i].name);
		}
	}
	printf("\nEnglish Score-\n");
	for (int i = 0 ; i < 2 ; i ++){
		if ( s[i].englishscore >= 60 ){
			printf("%s-Pass\n", s[i].name);
		}else{
			printf("%s-Fail\n", s[i].name);
		}
	}
	return 0 ;
}
