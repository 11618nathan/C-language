
#include <stdio.h>

// ���� �Լ� ��� ���� ����
#include <ctype.h>

void main()
{
	char input;

	printf("�ҹ��� �Է�: ");
	scanf("%c", &input);

	// toupper - �빮�ڷ� ����
	printf("%c \n", toupper(input));
}
