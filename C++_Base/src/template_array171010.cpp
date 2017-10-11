//day03
/*
 * 写一个函数模板,从一个数组里查找一个等于指定值的元素,返回它的地址。main里来定义一个char数组、一个double数组，一个string数组,一个C风格的字符串数组、一个日期数组、分别用一个模板来查找某一个数据。（提升：可以考虑写成查找第一个满足指定条件的元素，指定条件可以用一个返回bool类型数据的单参函数来表示，甚至用函数对象来表示）
*/
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T* find(T a[],int n,T val)
{
	for(int i = 0;i < n;i++)
	{
		if(a[i] == val)
		{
			 return a+i;
		}
	}
	return NULL;
}
template <>
const char** find(const char* a[],int n,const char* val){
	for(int i = 0;i < n;i++)
	{
		if(!strcmp(a[i],val)) 
		{
			 return a+i;
		}
	}
			return NULL;
}
struct Date{
	 int year;
	 int month;
	 int day;
	 bool operator==(const Date& d){
		  return year==d.year&&month==month&&day == d.day;
	 }
	 friend ostream& operator<<(ostream&o,const Date& d){
		  return o << d.year << '-' << d.month << '-' << d.day;
	 }
};

int main()
{
	char c[5] = {'a','b','c','d','e'};
	double d[3] = {1.1,2.2,3.3};
	string s[2]= {"hello","world!"};
	const char* t[2] = {"good","afternoon"};
	Date date[2] = {{2016,10,10},{2017,8,9}};
	cout << *find(c,5,'d') << endl;
	cout << *find(d,3,3.3) << endl;
	cout << *find(s,2,string("hello")) << endl;
	cout << *find(t,2,"good") << endl;
	Date val = {2016,10,10};//结构初始化问题
	cout << *find(date,2,val) << endl;
	return 0;
}
