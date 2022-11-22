#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string a, b; cin >> a >> b;
		cout << "Case " << i + 1 << ": " << b << ", " << a << endl;
	}
	return 0;
}