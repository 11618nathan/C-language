// strcmp - �� ���ڿ� ��

// �⺻ ����� �Լ� ����
#include <stdio.h>

// ���ڿ� �Լ� ��� ���� ����
#include <string.h>

void main()
{
	// ptr1�� ���ڸ� ptr2�� ���ڿ� ��
	int strcmp(const void * ptr1, const void * ptr2);

	char string1[20] = "";
	char string2[20] = "";

	// ù ��° ���ڿ� �Է�
	printf("ù ��° ���ڿ� �Է�: ");
	scanf("%s", string1);

	// ù ��° ���ڿ� �Է�
	printf("�� ��° ���ڿ� �Է�: ");
	scanf("%s", string2);

	// if�� ���
	if (!strcmp(string1, string2))
	{
		puts("���ڿ� ����");
	}
	else
	{
		puts("���ڿ� ����X");
	}
}
