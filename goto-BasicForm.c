
#include <stdio.h>

void main()
{
	int num;
	printf("��� �Է�: ");

	scanf("%d", &num);

	if (num == 1)
		goto num1;
	else if (num == 2)
		goto num2;
	else
		goto remainder;

num1:
	printf("1 �Է� \n");
	goto end;

num2:
	printf("2 �Է� \n");
	goto end;

remainder:
	printf("������ �Է� \n");
	goto end;

end:
	return 0;
}