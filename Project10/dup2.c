#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dup(int* value, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (value[size] == value[i]) {
			return 1;
		}
	}
	return 0;
}
void print_int_value(int* value, int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("###%d=%d\n", i, value[i]);
}
void random_test(int* value, int size)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < size; i++) {
		value[i] = rand() % 45 + 1;
		if (dup(value, i))i--;
	}

}
int main(void) {
	int value[6];
	random_test(value, 6);
	print_int_value(value, 6);
	return 0;
}
