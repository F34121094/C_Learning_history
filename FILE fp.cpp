#include<stdio.h>
	
int main(){
	
	//1.�}���ɮ� 
	FILE* fp;		//fp = file_pointer
	fp = fopen("data.txt","r");		
	//r = read Ū��  w = write �g�J 
	//fopen�ϧ���ɮצ�m������
	
	char name[100];
	char ID[50];		//�O�o�n��char�[�W�@�ӰO��������L�i�H��r�� 
	int score;
	int height;
	
	//2.Ū���ɮ� 
	int i;
	for(i = 0 ; i < 5 ; i ++){
		fscanf(fp, "%s %s %d %d", name, ID, &score, &height);
		printf("%s\nID-%s\nscore-%d\nheight-%dcm\n\n", name, ID, score, height);
	}
	//3.���� 
	fclose(fp);
	 
	return 0;
}

