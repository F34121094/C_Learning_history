#include<stdio.h>

struct student{
	char name[100];
	int age;
	int blood;
	int chscore;
	int mathscore;
	int engscore;
};



void printstudent(struct student s){
		char bloodtable[4][5]=
		{ "A", "B", "O", "AB"};
		
	printf("Name : %s\n", s.name);
	printf("Age : %d\n", s.age);
	printf("Bloood Type : %s\n", bloodtable[s.blood]);
	printf("ChineseScore : %d\n", s.chscore);
	printf("MathScore : %d\n", s.mathscore);
	printf("Englishscore : %d\n", s.engscore);		//用char記得用%s,用int記得用%d 
	}

int main(){
	
	struct student s[2] = {
	{"willy", 19, 2, 85, 98, 91},
	{"angel", 18, 0, 100, 99, 98},
	};
	
	for(int i = 0 ; i < 2 ; i ++){
		printstudent(s[i]);
		printf("\n");
	}
	
	return 0;
}
