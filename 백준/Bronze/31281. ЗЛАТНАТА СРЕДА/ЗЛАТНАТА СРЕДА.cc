#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<long long> v;
	long long a, b, c; cin >> a >> b >> c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	cout << v[1];
	return 0;
}