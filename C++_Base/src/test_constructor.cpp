// -- 
#include "constructor.h"
int main(){
	cout << "-----------------"	<< endl;
	Cat c;//自动调用无参构造函数
	cout << "=================" << endl;
	Dog d;
	cout << "*****************" << endl;
	Cat c2("加菲");//自动调用带有string参数的构造函数
	Dog d2("贵妃");
	Cat c3();//这相当于声明了一个函数c3,返回值是Cat,参数表为空
} 
