
#include <stdio.h>

int main()
{
	// ���� ������(<, <=, ==, >, >=, !=)
	int num1 = 16;
	int num2 = 18;
	int result1, result2, result3, result4, result5, result6;

	result1 = (num1 < num2);	// ~���� �۴�
	result2 = (num1 <= num2);	// ~���� �۰ų� ����
	result3 = (num1 == num2);	// ����
	result4 = (num1 > num2);	// ~���� ũ��
	result5 = (num1 >= num2);	// ~���� ũ�ų� ����
	result6 = (num1 != num2);	// ���� �ʴ�

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
}
