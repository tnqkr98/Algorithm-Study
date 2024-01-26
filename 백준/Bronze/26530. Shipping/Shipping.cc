#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		double sum = 0;
		for (int j = 0; j < n; j++) {
			string s; int a; double b; cin >> s >> a >> b;
			sum += a * b;
		}
		cout << "$" << fixed << setprecision(2) << sum << endl;
	}
	return 0;
}