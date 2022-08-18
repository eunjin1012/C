#include <stdio.h>
int main() {
	double rate;
	double usd;
	int krw;

	printf("환율을 입력하세요:");
	scanf("%lf", &rate);

	printf("원화 금액을 입력하세요:");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d은 %lf달러입니다.", krw,usd);
	return 0;
}
