
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// strlen ���ڿ��� ���� ��� �� ��ȯ
	size_t strlen(const char *string); // NULL ���ڸ� �������� �ʰ� ���̹�ȯ

	char Array[] = "11618nathan";

	printf("Array�� ����: %i \n", strlen(Array));
}
