#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int v, t;
	int s = 109;
	cin >> v >> t;
	cout << (s + (v * t % s)) % s << endl;
	return 0;
}