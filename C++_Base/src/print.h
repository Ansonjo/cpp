#ifndef PRINT_H
#define PRINT_H

template <typename T>
void print(T a[], int n){
	for(int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
#endif
