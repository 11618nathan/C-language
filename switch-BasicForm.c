
#include <stdio.h>

void main()
{
	int num;
	printf("1~3 ���� �Է�: ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("1 �Է� \n");
		break;
	case 2:
		printf("2 �Է� \n");
		break;
	case 3:
		printf("3 �Է� \n");
		break;
	default:
		break;
	}
}