// -- 
#include <iostream>
using namespace std;
#include "person.h"
void Person::birth(const char*tName,Date& tDate){
		  name = tName;
			date.year = tDate.year;
			date.month = tDate.month;
			date.day = tDate.day;
}
void Person::show(){
		  cout << "姓名:" << name << endl;
			cout << "出生日期:" << date.year << "年"
				   << date.month << "月" << date.day
					 << "日" << endl;
}
