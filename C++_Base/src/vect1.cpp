// vect1.cpp -- introducing the vector template
#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;
int main()
{
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;
	vector<int> ratings(NUM);
	vector<string> titles(NUM);
	cout << "You will do exactly as told. You will enter\n"
			 << NUM << " book titles and you ratings(0-10).\n";
	int i;
	for(i = 0; i < NUM; i++){
		 cout << ratings[i] << "\t"
	}
	return 0;
}
