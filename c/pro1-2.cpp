#include "stdio.h"
#include "conio.h"
main() 
{
	LINE:
	int x;
	printf("input your password : ");
	scanf("%s", &x);
	switch (x)
	{
		case 'winner': printf("winner 111\n");
		break;
		case 'KKK': printf("KKK 111\n");
		break ;
		case 'IO': printf("IO 111\n");
		break;
		default : goto LINE;
	}
}
