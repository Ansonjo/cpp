//day03
/*
 * 写一个函数模板,从一个数组里查找一个等于指定值的元素,返回它的地址。main里来定义一个char数组、一个double数组，一个string数组,一个C风格的字符串数组、一个日期数组、分别用一个模板来查找某一个数据。（提升：可以考虑写成查找第一个满足指定条件的元素，指定条件可以用一个返回bool类型数据的单参函数来表示，甚至用函数对象来表示）
*/
#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T* match(T*& a,const int& N,const T val){//形参的类型有问题,特别是引用
	for(int i = 0;i < N;i++)
	{
		if(a[i] == val)
		{
			 return &a[i];
		}
	}
			return NULL;
}
template <const char*>//部分特化
const char** match(const char**& a,const int& N,const char* val){//依旧是引用问题
	for(int i = 0;i < N;i++)
	{
		if(!strcmp(a[i],val)) 
		{
			 return &a[i];
		}
	}
			return NULL;
}

int main()
{
	char c[5] = {'a','b','c','d','e'};
	double d[3] = {1.1,2.2,3.3};
	string s[2]= {"hello","world!"};
	const char* t[2] = {"hello","好"};
	cout << match(c,5,'d') << endl;
	cout << match(d,3,1) << endl;
	cout << match(s,2,"hello") << endl;//类型匹配问题
	cout << match(t,2,"hello") << endl;
	return 0;
}
