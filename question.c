
#include <stdio.h>

// 1 - while �հ�
int main()
{
	int count = 1;
	int sum = 0;
	int input = 0;

	printf("�Է�: ");
	scanf("%d", &input);

	while (count<=input)
	{
		sum += count++;
	}

	printf("�հ�: %d \n", sum);
}