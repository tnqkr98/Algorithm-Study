#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		cout <<  b - (a - b) << " " << a - b << endl;
	}
	return 0;
}