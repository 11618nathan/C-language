/**/
#include <stdio.h>

int main()
{
	// ��� ������

	int num1 = 16;
	int num2 = 18;

	// ���� ������	
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
	printf("%d % %d = %d \n", num1, num2, num1 % num2);

	// ���� ������
	num1 += 3;
	printf("num1 += 2 = &d \n", num1);
	num2 -= 4;
	printf("num2 -= 4 = &d \n", num2);
	num1 *= 2;
	printf("num1 *= 2 = &d \n", num1);
	num2 /= 3;
	printf("num2 /= 3 = &d \n", num2);
	num1 %= 2;
	printf("num1 %= 2 = &d \n", num1);
}
