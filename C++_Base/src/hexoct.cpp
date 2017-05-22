#include <iostream>

int main()
{
	using namespace std;
	int chest = 42; //十进制
	int waist = 0x42;//十六进制
	int inseam = 042; //八进制

	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";

	
	inseam = 42;
	cout << hex <<"chest = " << chest << " (42 in decimal)\n";
	cout << dec <<"waist = " << waist << " (42 in hex)\n";
	cout << oct <<"inseam = " << inseam << " (42 in octal)\n";

	return 0;
}
