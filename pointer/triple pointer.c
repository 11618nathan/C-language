// Ʈ���� ������ -  ***

#include <stdio.h>

int main(void)
{
	int num = 7;
	int *optr = &num;
	int **dptr = &optr;
	int ***tptr = &dptr;

	printf("%d %d %d \n", *optr, **dptr, ***tptr);
	return 0;
}
