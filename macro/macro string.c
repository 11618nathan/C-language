// ��ũ�� # �����ڷ� string ġȯ

#include <stdio.h>
#define CONTACTS(A, B) #A "�� ��ȣ�� " #B

int main(void)
{
	printf("%s \n", CONTACTS(ȫ�浿, 111-1111-1111));
	printf("%s \n", CONTACTS(ȫ�浿, 222-2222-2222));
}