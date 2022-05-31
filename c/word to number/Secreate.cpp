#include "stdio.h"
#include "conio.h"
#include <string.h>  
char k[10];
char key[10];
int choseOption();
int main (void)
{line:
	
	choseOption();
	
goto line;	
}
int choseOption() {
	printf("\nSelete your programe (wtc/ctw) : ");
	if (strcmp(gets(key),"wtc")==0) {
		printf ("\nENther your word : ");
		scanf("%s",k);
	}else if (strcmp(key,"ctw")==0) {
		printf ("\nENther your word : ");
		scanf("%s",k);
	}else {
		printf("ERROR");
	}
	
	for (int i=0;i<=0;i++) {
		char t[] = k;
		
	}
	return 0;
	
}

