#include <iostream>
using namespace std;
void showbits(int var)
{
	typedef unsigned char uc;
	uc* p = (uc*)&var;//得到第一个字节
	for(int j = 0;j < 4;j++,p++)
	{
		uc byte = *p;
		for(int i = 0;i < 8;i++)	
		{
			cout << (0x80 & byte ? '1' : '0');
			byte = byte << 1;
		}
		cout << ' ';
	}
}//打印出来的是0x64 0x63 0x62 0x61,这就是小端系统
//否则就是大端系统
int main( ) 
{
	int x ;
	cout << "请输入一个数: ";
	cin >> x;
	showbits(x);
	return 0;
}
