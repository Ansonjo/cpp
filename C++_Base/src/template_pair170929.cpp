#include <iostream>
using namespace std;
#include <string>
template< typename K,typename V >
struct Pair{
	K first;
	V second;
	void show() {
		 cout <<"normal(" << first << "," << second <<")" << endl;
	}
};
template <typename K>//部分特殊化
struct Pair<K,const char*>{
	K first;
	string second;
	void show() {
		cout <<"2cstr(" << first << "," << second <<")" << endl;
	}
};
template <typename V>//部分特殊化
struct Pair<const char*,V>{
	string first;
	V second;
	void show() {
		cout <<"1cstr(" << first << "," << second <<")" << endl;
	}
};
template <>//全特化
struct Pair<const char*,const char*>{
	string first;
	string second;
	void show() {
		cout <<"all cstr(" << first << "," << second <<")" << endl;
	}
};
template< typename K,typename V >
Pair<K,V> makepair(K x,V y)
{
	Pair<K,V> pkv = {x,y};
	return pkv;
}
int main() 
{
	Pair<int,double> pib = {3,5.5} ;	 
	Pair<int,const char*> pic = {10,"hello"};
	Pair<const char*,int> pid = {"hello",10};
	Pair<const char*,const char*> pie = {"hello"," world"};
	pib.show();
	pic.show();
	pid.show();
	pie.show();
	makepair(12345,'$').show();
	makepair(1.2,"good").show();
	makepair("afternoon",888).show();
	makepair("你","好").show();
}
