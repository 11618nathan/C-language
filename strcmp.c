
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// �� ���ڿ� ���� Ȯ�� �Լ�
	// str1�� ó�� num���� ���ڸ� str2�� ó�� num���� ���ڿ� ��
	int strcmp(const char *s1, const char *s2);

	char Array[] = "11618nathan";
	char copy[] = "11618nathan";

	if (!strcmp(Array, copy))
	{
		printf("���ڿ� ���� \n");
	}
	else
	{
		printf("���ڿ� ����X \n");
	}
}
