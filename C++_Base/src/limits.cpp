#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int is " << sizeof(int) << " bytes." <<endl;
	cout << "short is " << sizeof n_short << " bytes." <<endl;
	cout << "long is " << sizeof n_long << " bytes." <<endl;
	cout << "long long is " << sizeof n_llong << " bytes." <<endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Maximum int value = " << INT_MAX << endl;
	cout << "Bits per value = " << CHAR_BIT << endl;
	return 0;
}
