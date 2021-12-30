#include <iostream>
using namespace std;
int main() {
	int bl[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++) {
		int t;
		cin >> t;
		cout << bl[i] - t<<" ";
	}
	return 0;
}