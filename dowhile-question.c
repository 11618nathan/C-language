
#include <stdio.h>

void main()
{
	int num = 0;
	int sum = 0;

	do
	{
		printf("�Է�: ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);
	printf("�հ�: %d \n", sum); 
}
