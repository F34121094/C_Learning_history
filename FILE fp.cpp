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
	int i;
	for(i = 0 ; i < 5 ; i ++){
		fscanf(fp, "%s %s %d %d", name, ID, &score, &height);
		printf("%s\nID-%s\nscore-%d\nheight-%dcm\n\n", name, ID, score, height);
	}
	//3.關檔 
	fclose(fp);
	 
	return 0;
}

