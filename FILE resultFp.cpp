#include<stdio.h>
	
int main(){
	
	//1.�}���ɮ� 
	FILE* fp;		//fp = file_pointer
	FILE* resultFp;
	fp = fopen("data.txt","r");		
	resultFp = fopen("result.txt","w");
	//r = read Ū��  w = write �g�J 
	//fopen�ϧ���ɮצ�m������
	
	char name[100];
	char ID[50];		//�O�o�n��char�[�W�@�ӰO��������L�i�H��r�� 
	int score;
	int height;
	
	//2.Ū���ɮ� 
	//feof(fp), ->end of file
	int i;
	while(1){		//while(1)�O�@�ӵL�a�j��Ӥ��O���@�����j�� 
	fscanf(fp, "%s %s %d %d", name, ID, &score, &height);		
	fprintf(resultFp, "%s%d\n", name, score + height);		//fprintf�O�g�J�@���ɮסA��{���b����ɡA�|���K�g�J�@��txt��(�sresult) 
	if (feof(fp))		//�Q��if (feof(fp))���ˬd���O�_�w�gŪ�쩳�A�O�ofeof�n�[�bŪ�ɮת��᭱ 
	
	break ;				//�YŪ�쩳�h���X�j��(break) 
	
	printf("%s\nID-%s\nscore-%d\nheight-%dcm\n\n", name, ID, score, height);
	}
	

	
	//3.���� 
	fclose(fp);
	fclose(resultFp);
	 
	return 0;
}

