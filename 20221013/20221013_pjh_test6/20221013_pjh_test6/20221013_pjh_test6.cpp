#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력: ");
	scanf("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break;
	
	}

	if( (sel=='M') || (sel=='m'))
	{
		printf("Morning \n");
	}

	else if ((sel =='A') || (sel == 'a'))
	{
		printf("Afternoon \n");
	}
	else if ((sel == 'E') || (sel == 'e'))
	{
		printf("Evening \n");
	}

	else
	{

	}

	return 0;
}
