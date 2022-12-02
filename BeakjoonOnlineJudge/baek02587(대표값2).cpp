#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int s = 0;
	vector<int> v;
	for (int i = 0; i < 5; i++) {
		int a; cin >> a;
		v.push_back(a);
		s += a;
	}
	sort(v.begin(), v.end());
	cout << s / 5 << endl << v[2];

	return 0;
}