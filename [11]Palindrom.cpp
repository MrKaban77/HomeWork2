
#include "pch.h"                 // не работает если ввести число 0
#include <iostream>

using namespace std;

int a(int b)
{
	int n = 0;
	while (b)
	{
		n = 10 * n + b % 10;
		b /= 10;
	}
	return n;
}


int main()
{
	cout << "Enter namber ";
	int b;
	cin >> b;
	if (b == a(b))
		cout << b << "True" << endl;
	else
		cout << "False " << endl;
	cin.get();
	cin.get();
	return 0;
}