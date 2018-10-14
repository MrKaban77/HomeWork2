#include "pch.h"
#include <iostream>

using namespace std;

long int Fib(int i)

{

	int value = 0;

	if (i < 1) return 0;

	if (i == 1) return 1;

	return Fib(i - 1) + Fib(i - 2);

}

long int main()

{

	int i = 0;

	while (i < 47)

	{

		cout << Fib(i) << endl;

		i++;

	}

	return 0;

}