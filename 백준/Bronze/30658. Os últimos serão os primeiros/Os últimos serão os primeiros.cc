#include <iostream>
#include <vector>
using namespace std;
int main() {
	while (1) {
		int n; cin >> n;
		vector<int> v;
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			v.push_back(a);
		}
		for (int i = 0; i < n; i++) {
			cout << v[n - i-1]<<endl;
		}
		cout << '0' << endl;
	}
	return 0;
}