//  -- 
#include <iostream>
using namespace std;
template < typename T >//模板头,T 是模板形参
class Stack
{ //类模板,实例化后还成为类
	T a[10];
public:	int cnt;
public:
		Stack():cnt(){}//无参构造,零初始化
		void push(const T& d){
			 a[cnt++] = d;
		}

		T& top(){
			 return a[cnt-1];
		}

		void pop(){
			 --cnt;
		}

		bool empty()const{//常函数表示不能修改成员变量的值
			 return cnt==0;
		}

		int size() const{
			 return cnt;
		}
}; 


int main()
{
	Stack<int> si;//int是模板实参
	cout << si.cnt << endl;
	Stack<const char*> ss;//类模板必须人为实例化
	si.push(1);
	si.push(2);
	si.push(3);
	si.push(4);
	ss.push("hello");
	ss.push("world");
	ss.push("Bye");
	while(!si.empty()){
		cout << si.top() << ' ';
		si.pop();
	}
	cout << endl;
	while(!ss.empty()){
		cout << ss.top() << ' ';
		ss.pop();
	}
	return 0;
}
