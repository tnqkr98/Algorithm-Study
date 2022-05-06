#include <iostream>
using namespace std;
int main() {
	int n,sum=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		sum += t;
		sum -= 1;
	}
	cout << sum+1;
	return 0;
}