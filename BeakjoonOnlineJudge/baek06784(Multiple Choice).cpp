#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		char a; cin >> a;
		v.push_back(a);
	}
	int s = 0;
	for (int i = 0; i < n; i++) {
		char a; cin >> a;
		if (a == v[i]) s++;
	}
	cout << s;
	return 0;
}