// special tempalate -- 某个模版的特殊化
#include <iostream>
#include <cstring>
using namespace std;
#include "print.h"
template <typename V>
bool lessthan ( V const& lh, V const& rh ){
	 return lh < rh;
}
template <>//对C风格字符串量的特殊化
bool lessthan ( const char* const& lh, const char* const& rh ){
	 return strcmp( lh,rh ) < 0;
}
template <typename T>
void sort( T a[], int n ){
	 for(int i = 0;i < n;i++){
		  for(int j = 0;j < i;j++){
				 if(lessthan(a[i],a[j])) 
					 swap(a[i],a[j]);
			}
	 }
}
int main()
{
	int ai[5] = {6,1,9,3,2};
	double ad[5] = {3.3,8.8,6.6,2.2,5.5};
	const char* ac[5] = {"good","morining","my","dear","friends"};
	sort(ai,5);print(ai,5);
	sort(ad,5);print(ad,5);
	sort(ac,5);print(ac,5);
	return 0;
}
