//�ǥ͸�ƺ޲z�t��
#include<stdio.h>

struct student{
	char name[100];		//�]���o�ӬO�r��A�ҥH�n���L�@�Ӥ��A���~�|���������O���� 
	int age;
	char studentID[100];
	int chinesescore;
	int mathscore;
	int englishscore;
};  

typedef struct student a;		//�o�̥i�H��typedef��struct student�নa 

int main(){
	a s[2] = {		//���c�}�C��l�ƪ��a��O�ϥ� = ����ꤣ�Τ]�i�H�A���|�����⪺ĵ�i�r 
		{"Willy", 19, "F34121094", 44, 65, 100},
		{"Angel", 18, "A09201629", 74, 12, 88},
	};
	
	for (int i = 0 ; i < 2 ; i ++){
		printf("Name:%s\n",s[i].name);		//�n�s�Xchar���O���饲���ϥ�%s�ӥs 
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
