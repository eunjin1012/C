#include <stdio.h>

int main(void)
{
	int hundred;
	int ten;
	int one;
	int input;

	printf("세자리 정수를 입력하세요:");
	scanf("%d", &input);

	one = input % 10;
	ten = input % 100 / 10;
	hundred = input / 100;

	printf("백의자리=%d\n, 십의자리=%d\n, 일의자리=%d\n", hundred, ten, one);

	return 0;
}
