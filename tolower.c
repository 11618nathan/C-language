
#include <stdio.h>

// ���� �Լ� ��� ���� ����
#include <ctype.h>

void main()
{
	char input;

	printf("�빮�� �Է�: ");
	scanf("%c", &input);

	// tolower - �ҹ��ڷ� ����
	printf("%c \n", tolower(input));
}
