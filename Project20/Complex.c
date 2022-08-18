#include <stdio.h>

typedef struct Complex{
	float real;
	float imag;
} Complex;

Complex add(Complex num1, Complex num2);

/*add:두 개의 복소수를 더한다.
 *@Param:Complex num1
 *@Param:Complex num2
 *@Return:Complex 구조체를 반환한다.
 */
Complex add(Complex num1, Complex num2) {
	Complex sum;
	sum.real = num1.real + num2.real;
	sum.imag = num1.imag + num2.imag;
	return sum;
}
void print_complex(Complex comp) {
	printf("Complex : %4.1f+%4.1fi\n", comp.real, comp.imag);
}
int reset_complex(Complex comp)
{
	comp.real = comp.imag = 0.0;
	return 0;
}
int main()
{
	printf("");
	Complex num = { 1.0, 2.0 };
	printf("초기화 이전: ");
	print_complex(num);
	reset_complex(num);
	printf("초기화 이후: ");
	print_complex(num);

	return 0;
}
