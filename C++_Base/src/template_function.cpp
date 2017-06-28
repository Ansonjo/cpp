// function template -- 需要在函数定义的上一行加上模板头
#include <iostream>
#include <string>
using namespace std;
template <typename T>
void sort(T t[], int n){
	for(int i=0; i < n;i++)
		for(int j=0;j <i;j++)
	  	if(t[i] < t[j] )
	    	swap(t[i],t[j]);
}
template <typename T>
void print(T t[], int n){ 
	for(int i=0; i < n;i++){
		 cout << t[i] <<"\t";
	}
	cout << endl;
}
int main()
{
	int a[6] = {7,2,3,4,5,6};
	char b[5] = {'f','b','c','d','e'};
	double c[5] = {1.1,1.2,1.2,1.4,1.5};
	string d[4] = {"af","ab","ac","ad"};
	sort(a,6);print(a,6);
	sort(b,5);print(b,5);
	sort(c,5);print(c,5);
	sort(d,4);print(d,4);
	return 0;
}
