#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int sum = 0; 
		double sug = 0;
		for (int i = 0; i < n; i++) {
			int a; double b; cin >> a >> b;
			sum += a;
			sug += (b*a);
		}
		cout.precision(2);
		cout << sum << " " << sug / sum << endl;;
	}
	return 0;
}