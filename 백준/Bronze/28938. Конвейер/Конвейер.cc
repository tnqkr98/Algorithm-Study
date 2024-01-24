#include <iostream>
using namespace std;
int main() {
	int n, sum=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		sum += a;
	}
	if (sum > 0) cout << "Right";
	else if (sum == 0) cout << "Stay";
	else cout << "Left";
	return 0;
}