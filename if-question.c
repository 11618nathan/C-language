
#include <stdio.h>

// 1 - �빮�� ��ȯ
void one()
{
	char input;
	
	printf("input: ");
	scanf("%c", &input);

	if (input >= 'a' && input <= 'z')
		input -= 32;

	printf("%c \n", input);
}


void main()
{
	one();
}