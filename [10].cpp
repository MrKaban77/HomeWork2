#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, a = 0, b = 1, fib = 0, i = 1;
	cin >> n;
	while (n > fib) {
		fib = a + b;
		a = b;
		b = fib;
		i++;
	}
	if (fib == n) {
		cout << i;
	}
	else {
		cout << -1;
	}
	return 0;
}