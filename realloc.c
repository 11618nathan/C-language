
#include <stdio.h>

// ��� ���� ����
#include <stdlib.h>

void main()
{
	// realloc() - ���� �޸� ���Ҵ� - ������ �Ҵ޵� �޸𸮸� ����
	void *realloc(void *memblock, size_t size);

	int * p = (int*)realloc(p, _msize(p) * 2);

	printf("%d byte \n", _msize(p));
	printf("%d \n", *p);

	// �Ҵ� �޸� ����
	free(p);
}