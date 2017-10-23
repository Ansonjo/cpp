#ifndef Person_H
#define Person_H
struct Date{
	 int year;
	 int month;
	 int day;
};
class Person {
	 const char* name;
	 Date date;
public:
	 void birth(const char*tName,Date& tDate);
	 void show();
};
#endif
