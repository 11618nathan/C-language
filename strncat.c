
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// strncat - �Ϻ� ���ڿ� ����
	// source�� destination�ڿ� ����
	char * strncat(char * destination, const char * source, size_t num);

	char original[20] = "11618";
	char copy[20] = "nathan11618";

	printf("original: %s \n", strncat(original, copy, 6));
}
