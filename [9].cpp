#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, a = 0, b = 1, fib = 0, i = 1;
	cin >> n;
	while (n > i) {
		fib = a + b;
		a = b;
		b = fib;
		i++;
	}
	cout << fib;
	return 0;
}