// �ε� �Ҽ��� ����

#include <stdio.h>

int main()
{
	float num = 0.0;
	int i = 0;

	for ( i = 0; i < 10000; i++)
	{
		num += 0.1;
	}

	printf("10000ȸ: %f \n", num);
	return 0;
}