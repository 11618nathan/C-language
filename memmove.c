
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// memmove - �޸� ��� �̵�
	// destination�� ���޵� ���� ��ȯ
	void * memmove(void * destination, const void * source, size_t num);

	char original[20] = "nathan";

	// ������ ���Ϻ��� �迭�� ũ�� �̻� ���� -> �����÷ο� ����
	char copy[20] = "11618";

	// (������ ��ġ, ��ġ, ũ��)
	memmove(copy+4, original, 5);

	puts(original);
}
