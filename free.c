
#include <stdio.h>

// ��� ���� ����
#include <stdlib.h>

void main()
{
	// free() - �Ҵ� �޸� ���� 

	int * p = (int*)malloc(sizeof(int));

	printf("%d \n", *p);
	 
	free(p);
}
