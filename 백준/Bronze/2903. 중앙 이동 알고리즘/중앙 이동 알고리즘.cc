#include <iostream>
using namespace std;
int main() {
	int t[16] = { 0 };
	int b = 2;
	t[1] = 3;
	for (int i = 2; i < 16; i++) {
		t[i] = t[i - 1] + b;
		b *= 2;
	}
	int n; cin >> n;
	cout << t[n] * t[n];
	return 0;
}