
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// strcpy - ���ڿ� ���� �Լ�
	// dest�� ���޵� ���� ��ȯ
	char* strncpy(char *destination, const char *source, size_t num);

	char original[] = "11618nathan";

	// ������ ���Ϻ��� �迭�� ũ�� �̻� ���� -> �����÷ο� ����
	char copy[20];

	// (������ ��ġ, ��ġ);
	strncpy(copy, original, 5);

	// NULL ���� - �� Ȯ��
	copy[6] = NULL;

	printf("%s", copy);
	puts("");
}
