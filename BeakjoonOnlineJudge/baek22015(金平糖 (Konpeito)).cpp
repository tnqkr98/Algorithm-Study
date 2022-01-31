#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int>v;
	int m = 0;
	for (int i = 0; i < 3; i++) {
		int t; cin >> t;
		v.push_back(t);
		if (t > m) m = t;
	}
	cout << m * 3 - v[0] - v[1] - v[2];

	return 0;
}