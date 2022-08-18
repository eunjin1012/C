#include <iostream>
using namespace std;

template <class T>
T smaller(T a, T b) {
	if (a < b)return a;
	else
		return b;
}

int main() {
	int a = 5, b = 4;
	char c = 'a', d = 'z';

	cout << "smaller의 결과는" << smaller(a, b) << endl;
	cout << "smaller의 결과는" << smaller(c, d) << endl;
}
