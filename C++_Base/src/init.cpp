// init.cpp -- type changes on-initialization
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;			// int converted to float
	int guess(3.9832);	// double converted to int
	int debt = 7.2E12;	// result not defined in C++
	cout << "tree = " << tree << endl;//3.000000
	cout << "guess = " << guess << endl;//3
	cout << "debt = " << debt << endl;//不定
	cout << " " << endl;
	return 0;
}
