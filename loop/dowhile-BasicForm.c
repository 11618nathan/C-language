
#include <stdio.h>

void main()
{
	int sum = 0;
	int num = 0;

	do
	{
		printf("���� �Է�(0 - ����): ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);

	return 0;
}
