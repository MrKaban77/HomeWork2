#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	b = (a % 10) * 10 + ((a / 10) % 10);
	a = a / 100;
	c = (b - a) + 1;
	cout << c << endl;
	return 0;
	cin.get();
	cin.get();
}