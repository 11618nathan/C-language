
#include <stdio.h>

void main()
{
	float i = 1.1618;
	float j = 777;

	// ������ ���� ���� - ������ �ּ� ����X
	float * pointer;

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
