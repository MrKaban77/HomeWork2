
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b=0, c;
	cin >> a;
	if (a < -2 ^ 31 && a>2 ^ 31 - 1)
		cout << 0 << endl;
	else {
		while (a != 0) {
			c = a % 10;
			b = 10 * b + c;
			a /= 10;
		}
	}
	cout << b;
}
