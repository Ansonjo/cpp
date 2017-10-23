// reference--右值必须是常引用const 类型 & r 
#include <iostream>
void swap(const int& a,int& b){
	if( a > b){
		b = a;
	}
}
int main()
{
	int b = 5;
	swap(10,b);
	const int & c = 5;
	using namespace std;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
