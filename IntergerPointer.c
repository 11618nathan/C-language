
#include <stdio.h>

void main()
{
	int i = 11618;
	int j = 777;

	// ������ ���� ����
	int * pointer;

	// ������ ����
	pointer = &i;
	printf("i�� �ּ�: %p \n", &i);
	printf("pointer: &p \n", pointer);
	printf("pointer�� ��: %d \n", *pointer);

	// ������ ����
	pointer = &j;
	printf("j�� �ּ�: %p \n", &j);
	printf("pointer: &p \n", pointer);
	printf("pointer�� ��: %d \n", *pointer);
}
