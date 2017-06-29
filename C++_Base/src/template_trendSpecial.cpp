//  -- 
#include <iostream>
using namespace std;

template <typename T>
void print(T& d){
	 cout << d << " ";
}
template <typename T>
void print(T* p){//重载模板,如果print(T*& p) 就是部分特殊化
	 print(*p);
}
template <typename T,int N>//N是非类型形参
void print(T(&a)[N]){
	 for(int i = 0;i < N;i++) 
		 print(a[i]);
	 cout << endl;
}
int main()
{
	int x = 123;
	int a[5] = {1,2,3,4,5};
	print(x);
	cout << "----x----" << endl;
	print(&x);
	cout << "----y----" << endl;
	print(a);
	return 0;
}
