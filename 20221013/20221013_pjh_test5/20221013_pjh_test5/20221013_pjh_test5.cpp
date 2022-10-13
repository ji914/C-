#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	int num = 0;
	printf("1이상 3이하의 정수 입력: ");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("1 is ONE \n");
		break;
	case 2:
		printf("2 is TWO \n");
		break;
	case 3:
		printf("3 is THREE \n");
        break;
		
	default:
		printf("I don't know! \n");
	}

	if (num == 1)
	{
		printf("1 is ONE \n");
	}

	else if (num == 2)
	{
		printf("2 is TWO \n");
	}
	
	else if (num == 3)
	{
		printf("3 is THREE \n");
	}
	
	else
	{
		printf("I don't know! \n");
	}

	return 0;
}
