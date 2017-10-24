// -- 
#include "person.h"
int main(){
	 Person p1,p2;
	 Date d1 = {1987,9,10};
	 p1.birth("Anson",d1);
	 Date d2 = {1996,1,18};
	 p2.birth("tina",d2);
	 p1.show();
	 p2.show();
}
