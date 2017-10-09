//  -- 
#include <iostream>
#include <cstring>
using namespace std;
template <class K,class V>//class和typename一样
struct Pair{
	 K first;
	 V second;
public:
	 Pair():first(),second(){} 
	 template<class F,class Q>//模板构造函数
	 Pair(const F&x, const Q&y):first(x),second(y){}
	 template<class F,class Q>//
	 Pair& operator=(const Pair<F,Q>& p){
		  first = p.first;
			second = p.second;
			return *this;
	 }
friend ostream& operator<<(ostream&o,const Pair&p)
	 {
		 return o << '(' << p.first << ',' << p.second << ')';
	 }
};
int main()
{
	Pair<int,double> pid(1,2.3);
	//Pair<int,double> pid(1,2.3);//自动类型提升
	Pair<char,int> pci('a',45);
	cout.setf(ios::showpoint);
	cout << pid << pci << endl;
	pid = pci;
	cout << pid << pci << endl;
	char a[10] = "aa",b[10] = "oo";
	Pair<const char*, const char*> pcc(a,b);
	Pair<string,string> pss;
	pss = pcc ;
	cout << pcc << pss << endl;
	strcpy(a,"bb");
	strcpy(b,"cc");
	cout << pcc << pss << endl;
	return 0;
}
