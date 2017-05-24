// floatadd.cpp -- precision problems with float 
// p58
#include <iostream>

int main()
{
	using namespace std;
	float a = 2.34e+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	return 0;
}
