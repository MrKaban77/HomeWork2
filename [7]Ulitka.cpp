#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int h, a, b, c;
	cin >> h >> a >> b;
	c = (h / (a - b) - (a - (h % (a - b))) / (a - b)) + 1;
	cout << c << endl;
	return 0;
	cin.get();
	cin.get();
}