
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// strchr - �ش� ù ��° ���ڷ� �̵�
	char * strchr(char * str, int character);

	char original[] = "11618nathan";

	printf("%s \n", strchr(original, 'n'));
}
