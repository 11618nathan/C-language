
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// memcpy - �޸� ��� ����
	// destination�� ���޵� ���� ��ȯ
	void * memcpy(void * destination, const void * source, size_t num);

	char original[] = "11618nathan";

	// ������ ���Ϻ��� �迭�� ũ�� �̻� ���� -> �����÷ο� ����
	char copy[20];

	// (������ ��ġ, ��ġ);
	memcpy(copy, original, strlen(original) + 1);

	puts(copy);
}
