#include <iostream>
using namespace std;
int main() {
	int n,c=0,sum=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		if (t == 1) {
			c++;
			sum += c;
		}
		else c = 0;
	}
	cout << sum;
	return 0;
}