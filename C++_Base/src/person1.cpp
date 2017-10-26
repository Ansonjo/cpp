// --
#include <iostream>
using namespace std;
#include <string>
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
}
