
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// strncmp - �Ϻ� ���ڿ� ��
	// str1�� ���ڸ� str2�� ���ڿ� ��
	int strncmp(const char * str1, const char * str2, size_t num);

	char original[] = "1161803";
	char copy[] = "11618nathan";

	if (!strncmp(original, copy, 5))
	{
		puts("���ڿ� ����");
	}
	else
	{
		puts("���ڿ� ����X");
	}
}
