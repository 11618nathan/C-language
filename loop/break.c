
#include <stdio.h>

void main()
{
	int num = 1;
	int sum = 0;

	while (1)
	{
		sum += num;
		if (num > 99)
		{
			// ¹Ýº¹¹® Å»Ãâ
			break;
		}
		num++;
	}

	printf("num: %d \n", num);
	printf("sum: %d \n", sum);
}