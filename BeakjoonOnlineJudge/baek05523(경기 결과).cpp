#include <iostream>
using namespace std;
int main() {
	int n,sa=0,sb=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a > b) sa++;
		else if (a < b) sb++;
	}
	cout << sa << " " << sb;
	return 0;
}