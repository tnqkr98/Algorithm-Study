#include <iostream>
using namespace std;
int main() {
	int n,sum=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a == 136) sum += 1000;
		if (a == 142) sum += 5000;
		if (a == 148) sum += 10000;
		if (a == 154) sum += 50000;
	}
	cout << sum;
	return 0;
}