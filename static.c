
#include <stdio.h>

void run()
{
	// static - �Լ� �ȿ��� ���� - 1�� �ʱ�ȭ - ������� �޸� ����
	static int staticNum = 0;
	int num = 0;
	printf("static: %d, local: %d \n", staticNum++, num++);
}


int main()
{
	int i;

	for ( i = 0; i < 3; i++)
	{
		run();
	}
}