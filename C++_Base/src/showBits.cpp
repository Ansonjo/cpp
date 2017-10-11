//cppday01  -- 
#include <iostream>
using namespace std;
void showBits(int var)
{
	 int a[32] = {};
	 int i = 0;
	 while(var)
	 {
			a[i] = var % 2;
			if(a[i])
			{
				 var = (var - 1)/2;
			}else{
				 var /= 2;
			}
			i++;
	 }
	 cout << endl;
	 int len = i;
	 for(int i = len - 1;i >= 0 ;i--)
	 {
		  cout << a[i];
			if(!(i+1)%8)
			{  
			 	cout << endl;
			}
	 }
	 cout << endl;
}
int main()
{
	showBits(8);
	return 0;
}
