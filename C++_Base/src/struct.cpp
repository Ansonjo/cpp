//cpp  -- day01
#include <iostream>
#include <cstring>
using namespace std;
namespace czq{
	struct Student{
		 //const char* name;
		 char name[20];
		 int age;
		 Student():name(),age(){}
		 Student(const char* const& x,int y):age(y){strcpy(name,x);}
		 void show(){
			  cout << age << "岁的" << name << "轻松搞定c++" << endl;
		 }
	};
}
int main()
{
	czq::Student s1("芙蓉",18);
	using namespace czq;
	Student s2;
	strcpy(s2.name,"权哥");
	s2.age = 21;
	s1.show();
	s2.show();
	return 0;
}
