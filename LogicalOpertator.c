
#include <stdio.h>

int main()
{
	int num1 = 11618;
	int num2 = 1;
	int result1, result2, result3;

	// �� ������(&&, ||, !)
	// ����
	result1 = (num1 == 11618 && num2 == 11);
	// ����
	result2 = (num1 < 11618 || num2 > 1);
	// ������
	result3 = (!num1);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);

	return 0;
}