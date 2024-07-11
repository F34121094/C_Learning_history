#include<stdio.h>
	
int main(){
	
	//1.開啟檔案 
	FILE* fp;		//fp = file_pointer
	fp = fopen("data.txt","r");		
	//r = read 讀取  w = write 寫入 
	//fopen使找到檔案位置的指標
	
	char name[100];
	char ID[50];		//記得要幫char加上一個記憶體區讓他可以放字串 
	int score;
	int height;
	
	//2.讀取檔案 
	//feof(fp), ->end of file
	int i;
	while(1){		//while(1)是一個無窮迴圈而不是做一次的迴圈 
	fscanf(fp, "%s %s %d %d", name, ID, &score, &height);		
	if (feof(fp))		//利用if (feof(fp))來檢查文件是否已經讀到底，記得feof要加在讀檔案的後面 
	break;
					//若讀到底則跳出迴圈(break) 
	printf("%s\nID-%s\nscore-%d\nheight-%dcm\n\n", name, ID, score, height);
	}
	//3.關檔 
	fclose(fp);
	 
	return 0;
}

