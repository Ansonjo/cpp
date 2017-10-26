// --
#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
int thisyear;
class Person{
	string name;
	int year;
	bool gender;
	Person* lover;
	public:
	Person(const string& name,bool gender){
		 Person::name = name;
		 year = thisyear;
		 this->gender = gender;
		 lover = NULL;
	}
	void show(){
		 cout << "我是" << (gender?"帅哥":"美女") << name <<",今年" << thisyear - year;
		 if(lover)
			 cout << ",跟" << lover->name << "恋爱中" << endl;
		 else
			 cout << ",单身" << endl;
	}
	Person(){
		 name = "无名";
		 //...
		 cout << "一位无名大侠出世了" << endl;
		 cout << "这是非法的,程序终止" << endl;
		 _Exit(0);
	}
	void love(Person& x){
		//Person* const this;
		 lover = &x;
		 x.lover = this;
	}
	void breakUp(){
		 lover = lover->lover = NULL;
	}
	protected:
};
int main(){
	 thisyear = 1990;
	 Person a("李钊",true);
	 thisyear = 1992;
	 Person b("芙蓉",false);
	 thisyear = 2017;
	 a.show();
	 b.show();
	 b.love(a);
	 a.show();
	 b.show();
	 b.breakUp();
	 a.show();
	 b.show();
//	 Person ("张倩",false);//匿名对象,类型转换
//	 Person c;
//	 cout << "娃哈哈,你看不到我滴 " << endl;
}
