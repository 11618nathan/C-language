
#include <stdio.h>

// 1 - for �հ�
int main()
{
	int count = 1;
	int sum = 0;
	int input = 0;

	printf("�Է�: ");
	scanf("%d", &input);

	for (count = 1; count <= input; count++)
	{
		sum += count;
	}

	printf("�հ�: %d \n", sum);
}