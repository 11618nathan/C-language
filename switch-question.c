
#include <stdio.h>

// 1 - Ȧ¦
void one()
{
	int input;

	printf("�Է�: ");
	scanf("%d", &input);

	switch (input%2)
	{
	case 0:
		printf("¦�� \n");
	case 1:
		printf("Ȧ�� \n");
	}
}


void main()
{
	one();
}
