#include <iostream>
using namespace std;

int main()
{
	cout << "size of wchar_t = " << sizeof(wchar_t)  <<endl;
	wchar_t bob = L'P';
	wcout << bob << endl;
  wcin >> bob;
	wcout << bob << endl;
	char16_t ch1 = u'q';
	char32_t ch2 = U'\U0000222B';
	cout << ch1 << endl << ch2 <<endl;
	return 0;
}
