
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// strcpy - ���ڿ� ���� �Լ�

	char original[] = "11618nathan";

	// ������ ���Ϻ��� �迭�� ũ�� �̻� ���� -> �����÷ο� ����
	char copy[20];

	// (������ ��ġ, ��ġ);
	strcpy(copy, original);

	printf("%s \n", copy);
}
