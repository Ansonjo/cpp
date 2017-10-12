//day03
/*
 * 写一个函数模板,从一个数组里查找一个等于指定值的元素,返回它的地址。main里来定义一个char数组、一个double数组，一个string数组,一个C风格的字符串数组、一个日期数组、分别用一个模板来查找某一个数据。（提升：可以考虑写成查找第一个满足指定条件的元素，指定条件可以用一个返回bool类型数据的单参函数来表示，甚至用函数对象来表示
*/
#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
/*
 *首先C++是强类型的,不允许常规指针修改const修饰的变量值
 *引用相当于指针常量,永远效忠一个变量,如int a;int * const p = &a;
 *如果传入的是没有名称的值,就是不是一个变量,或者类型不匹配,但可以可以隐式转换,此时编译器会生成一个临时匿名变量,而函数形参引用的则是这个临时变量的地址,而临时变量会在函数结束后释放,所以如果你要修改传入的值,就不能让其产生临时变量
 * */
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
/*
template <>//部分特化
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
*/
int main()
{
	char c[5] = {'a','b','c','d','e'};
	double d[3] = {1.1,2.2,3.3};
	string s[2]= {"hello","world!"};
	const char* t[2] = {"hello","好"};
	const char cc = 'd';
	cout << match(c,5,cc) << endl;
//	cout << match(d,3,1) << endl;
	//cout << match(s,2,"hello") << endl;//类型匹配问题
	//cout << match(t,2,"hello") << endl;
	return 0;
}
