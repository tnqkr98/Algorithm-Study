#include <iostream>
using namespace std;
int main() {
	int a, b;
	do{
		cin >> a >> b;
		cout << a + b;
	}while (a != 0 && b != 0);

	return 0;
}