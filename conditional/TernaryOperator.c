
#include <stdio.h>

void main()
{
	// ? :
	// ���׿�����(Ternary operator) - �ǿ������� ��: 3
	// ���밪 ��ȯ
	int input;
	int abs;

	printf("���� �Է�: ");
	scanf("%d", &input);

	abs = input > 0 ? input : input*(-1);
	printf("���밪: %d \n", abs);

}