#include <iostream>
using namespace std;
int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 5; i++) {
		int b; cin >> b;
		a[b] += 1;
	}
	for (int i = 0; i < 10; i++) {
		if (a[i]%2 == 1) cout << i;
	}
	return 0;
}