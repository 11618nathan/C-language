
#include <stdio.h>

// ��� ���� ����
#include <malloc.h>

void main()
{
	// malloc() - ���� �޸� �Ҵ� - �������� �޸𸮸� �Ҵ��Ͽ� �����͸� ������ ����
	void * malloc(size_t size);

	int * p;
	x = (int *)malloc(sizeof(int));

	*p = 11618;
	printf("%d \n", p);

	free(p);
}