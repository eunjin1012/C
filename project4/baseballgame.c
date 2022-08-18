#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x, y, z, a, b, c;
	int strike = 0;
	int	ball = 0;
	int	out = 0;
	srand((unsigned int)time(NULL));//무작위 변수를 받는 변수

	a = rand() % 9 + 1;
	b = rand() % 9 + 1;
	c = rand() % 9 + 1;

	while(1)
	{
	printf("3자리의 숫자를 입력하세요: ");
	scanf("%d %d %d", &x, &y, &z);
	if (a == x) 
	{
		strike++;
	}
	else if (a == y || a == z) 
	{
		ball++;
	}
	else
		out++;

	if (b == y) 
	{
		strike++;
	}
	else if (b == x || b == z) 
	{
		ball++;
	}
	else
		out++;

	if (c == z) 
	{
		strike++;
	}
	else if (c == x || c == y) 
	{
		ball++;
	}
	else
		out++;

	if (strike == 3) 
	{
		printf("맞췄습니다.");
		break;
	}

	if (strike != 0)
		printf("%d 스트라이크", strike);
	if (ball != 0)
		printf("%d 볼", ball);
	if (out != 0)
		printf("%d 아웃", out);
	printf("\n");
}
}
