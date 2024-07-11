#include<stdio.h>

int main(){
	
	int i;
	char ch[50];
	
	printf("please type a string\n");
	fgets(ch, 50, stdin);		//Æ≥¶r¶Í
	
	//¿À¨d¶r¶Í(∞j∞È)
	for (i = 0 ; i < 50 ; i ++){
		if (ch[i] >= 'a' && ch[i] <= 'z'){
			ch[i] -= 32;
		}
		else{
			ch[i] == ch[i];
		}
	}

	printf("\nthe string been turn into capital is-\n%s", ch);
	
	 return 0;
	 
}
