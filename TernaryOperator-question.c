
#include <stdio.h>

// 1 - ���밪
void one()
{
	int input = 0;

	printf("�Է�: ");
	scanf("%d", &input);

	input = input < 0 ? -input : input;

	printf("%d \n", input);
}


// 2 - �빮�� ��ȯ
void two()
{
	char chr;

	printf("�Է�: ");
	scanf("%c", &chr);

	chr = (chr >= 'a' && chr <= 'z') ? chr - 32 : chr;

	printf("%c \n", chr);
}


void main()
{
	one();
	two();
}
