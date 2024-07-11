#include<stdio.h>
#include<stdlib.h>

int main(){
	char line[20];
	gets(line);

	int inans = 0;
	for(int i = 0; i < 20 ; i = i+2){
		int x = i;
		if((int)line[x] == 40){		//括弧 
			do{		//進到括弧裡先檢查有無乘除號
				x = x+2;
				if((int)line[i] == 42 ){	//乘號 
				inans = inans + ((int)line[i-2]-48) * ((int)line[i+2]-48);
					if((int)line[i] == 43){ 
						inans = inans + ((int)line[i-2]-48) + ((int)line[i+2]-48);
					}else if((int)line[i] == 45){
						inans = inans + ((int)line[i-2]-48) - ((int)line[i+2]-48);
					}else continue;
					
				}else if((int)line[i] == 47 ){		//除號 
				inans = inans + ((int)line[i-2]-48) / ((int)line[i+2]-48);
					if((int)line[i] == 43){ 
						inans = inans + ((int)line[i-2]-48) + ((int)line[i+2]-48);
					}else if((int)line[i] == 45){
						inans = inans + ((int)line[i-2]-48) - ((int)line[i+2]-48);
					}else continue;
				}else continue;
				
			}while((int)line[i] != 41);
		}else continue;
	}
	printf("%d", inans);
	return 0;
}

//每個符號皆空一格 
