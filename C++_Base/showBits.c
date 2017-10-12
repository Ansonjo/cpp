#include <stdio.h>
void showbits(int var)
{
	typedef unsigned char uc;
	uc* p = (uc*)&var;//得到第一个字节
	for(int j = 0;j < 4;j++,p++)
	{
		uc byte = *p;
		for(int i = 0;i < 8;i++)	
		{
			if(0x80 & byte)
			{
				 putchar('1');
			}else
			{
				 putchar('0');
			}
			byte = byte << 1;
		}
		putchar(' ');
	}
}//打印出来的是0x64 0x63 0x62 0x61,这就是小端系统
//否则就是大端系统
int main( ) 
{
	int x = 0x61626364;
	showbits(x);
	return 0;
}
