//cpp  -- day01
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	union {
		int x;
		char y[4];
	};
	x = 0x61626364;
	cout << y[0] << endl;
	y[1] = '0';//0x30
	cout << hex << showbase << x << endl;
	return 0;
}
