
#include <stdio.h>

// ��� ���� ����
#include <stdlib.h>

void main()
{
	// calloc() - ���� �޸� �Ҵ� - �������� �޸𸮸� 0���� �Ҵ��Ͽ� �����͸� ������ ����
	void * calloc(size_t size);

	int * p = (int*)calloc(sizeof(int)); 

	printf("%d byte \n", _msize(p));

	printf("%d \n", *p);

	// �Ҵ� �޸� ����
	free(p);
}
