#include<stdio.h>
	
int main(){
	
	//1.�}���ɮ� 
	FILE* fp;		//fp = file_pointer
	fp = fopen("data.txt","r");		
	//r = read Ū��  w = write �g�J 
	//fopen�ϧ���ɮצ�m������
	
	char name[100];
	char ID;
	int score;
	int height;
	
	//2.Ū���ɮ� 
	fscanf(fp, "%s%s%d%d", name, ID, &score, &height);
	printf("%s\nID-%s\nscore-%d\nheight-", name, ID, score, height);
	
	//3.���� 
	fclose(fp);
	 
	return 0;
}

