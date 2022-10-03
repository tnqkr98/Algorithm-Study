#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	cout << "int a;"<<endl;
	cout << "int *ptr = &a;" << endl;
	for (int i = 2; i <= n; i++) {
		cout << "int ";
		for (int j = 1; j <= i; j++) 
			cout << "*";
		cout << "ptr" << i << " = &ptr";
		if (i > 2)cout << i - 1;
		cout << ";" << endl;
	}


	return 0;
}