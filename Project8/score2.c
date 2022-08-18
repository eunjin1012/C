#include <stdio.h>
#include <math.h>

void inputarray(int*a, int size);
void sortarray(int *a, int size);
void printarray(int*a, int size);
double stdarray(int* a);
double averagearray(int* a);

int main() {
	int a[10];
	double std, average;
	inputarray(a, 10);
	average = averagearray(a);
	std = stdarray(a);
	sortarray(a, 10);
	printarray(a, 10);
	printf("평균점수 : %lf\n", average);
	printf("표준편차 : %lf\n", std);
}
void inputarray(int* a, int size)
{
	for (int i = 0; i < size; i++){
		printf("학생의 점수를 입력하세요:\n>>", i + 1);
		scanf_s("%d", a + i);
	}
}

void sortarray(int* a, int size)
{
	int swap;
	int y, z;
	for (int x = 0; x < size - 1; x++)
	{
		for (y = x + 1; y < size; y++){
			if (a[x] < a[y]){
				swap = a[y];
				a[y] = a[x];
				a[x] = swap;
			}
		}
	}
}

void printarray(int* a, int size)
{
	int i = 0;
	for (i = 0; i < size; i++){
		printf("%d. %d점\n", i + 1, *(a + i));
	}
	printf("\n최댓값 : %d점\n", a[0]);
	printf("최솟값 : %d점\n", a[9]);
}


double stdarray(int* a)
{
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += (a[i] - averagearray(a))*(a[i] - averagearray(a));
	}
	return sqrt(sum / 10);
}

double averagearray(int* a)
{
	int i, sum = 0;
	for (i = 0; i < 10; i++){
		sum += a[i];
	}
	return sum / 10;
}
