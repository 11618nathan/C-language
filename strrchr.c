
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// strrchr - �ڿ������� �ش� ù ��° ���ڷ� �̵�
	char * strrchr(char * str, int character);

	char original[] = "11618nathan";

	// �ּ� ��ġ���� ������ ���
	printf("%s \n", strrchr(original, 'n'));
}
