
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// ���ڿ� �����̱�
	char * strcat(char * destination, const char * source);

	char str1[20] = "11618";
	char str2[20] = "nathan";

	printf("str1: %s \n", strcat(str1, str2));
}
