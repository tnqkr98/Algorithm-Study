#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	int c = 0;
	for (int i = 0; i < a; i++) {
		int n; cin >> n;
		if (n <= b) c++;
	}
	cout << c;
	return 0;
}