#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	sort(v.begin(), v.end());
	int sum = 0;
	for (int i = v.size() - 1; i > 0; i--) {
		sum += v[i];
	}
	cout << sum + 1;
	return 0;
}
