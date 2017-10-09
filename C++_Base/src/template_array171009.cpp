//day03
#include <iostream>
using namespace std;
template <typename T,int N>
class Array{
	 T a[N];
public:
	 T& operator[](int idx){
		  return a[idx];
	 }
	 const T& operator[](int i)const{
		  return a[i];
	 }
	 void fill(T start,const T& step){
		 for(int i = 0;i < N;i++,start+=step){
			  a[i] = start;
		 }
	 }
	 template<typename A,int M>//友元函数模板
	 friend ostream& operator<<(ostream& o,const Array<A,M>& x);//尽量不要把声明和定义分开
};
template<typename T,int N>//友元函数模板
ostream& operator<<(ostream& o,const Array<T,N>& x){ 
	 o << "[ ";
	 for(int i = 0;i < N;i++)
	 {
		  o << x[i] << ' ';//对于常对象,只能调用常函数,否则会报错:实参时丢弃了类型限定,所以x.operator[](i)必须是常函数
	 }
	 o << "]";
	 return o;
}
int main()
{
	Array<int,5> a1;
	a1.fill(11,2);
	cout << a1 << endl;
	return 0;
}
