// -- 
#include <iostream>
using namespace std;
#include "person.h"
void Person::birth(const char*tName,Date& tDate){
		  this->name = tName;
			this->date.year = tDate.year;
			this->date.month = tDate.month;
			this->date.day = tDate.day;
}
void Person::show(){
		  cout << "姓名:" << this->name << endl;
			cout << "出生日期:" << this->date.year << "年"
				   << this->date.month << "月" << this->date.day
					 << "日" << endl;
}
int main(){
	 Person p1,p2;
	 Date d1 = {1987,9,10};
	 p1.birth("Anson",d1);
	 Date d2 = {1996,1,18};
	 p2.birth("tina",d2);
	 p1.show();
	 p2.show();
}
