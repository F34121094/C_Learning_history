#include<stdio.h>
#include<stdlib.h>

int main(){
	char line[20];
	gets(line);

	int inans = 0;
	for(int i = 0; i < 20 ; i = i+2){
		int x = i;
		if((int)line[x] == 40){		//�A�� 
			do{		//�i��A���̥��ˬd���L������
				x = x+2;
				if((int)line[i] == 42 ){	//���� 
				inans = inans + ((int)line[i-2]-48) * ((int)line[i+2]-48);
					if((int)line[i] == 43){ 
						inans = inans + ((int)line[i-2]-48) + ((int)line[i+2]-48);
					}else if((int)line[i] == 45){
						inans = inans + ((int)line[i-2]-48) - ((int)line[i+2]-48);
					}else continue;
					
				}else if((int)line[i] == 47 ){		//���� 
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

//�C�ӲŸ��ҪŤ@�� 
