#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	vector<int> v;
	v.push_back(a * 4 + b * 2);
	v.push_back(a * 2 + c * 2);
	v.push_back(b * 2 + c * 4);
	cout << *min_element(v.begin(), v.end());
	return 0;
}