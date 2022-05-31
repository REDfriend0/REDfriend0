#include "stdio.h"
#include "conio.h"
main()
{
	line1:
	int x;
	int y;
	printf("this is loop programe you are sure : ");
	scanf("%s",&x);
	if ((x == '1') ) {
		for (y = 1;y <= 10000;y++) {
			printf("number is : %d\n",y);
		}
	} else {
		printf("some wen wrong reEnther Agan\n");
		goto line1;
	}
}
