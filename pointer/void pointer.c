//void ������ - type X, �Լ� �ּ� ����

#include <stdio.h>

void voidpointer(void)
{
	printf("void ������");
}

int main(void)
{
	int num = 7;
	void * ptr1;
	void * ptr2;

	ptr1 = &num;
	ptr2 = voidpointer;

	printf("%p \n", ptr1);
	printf("%p \n", ptr2);

}