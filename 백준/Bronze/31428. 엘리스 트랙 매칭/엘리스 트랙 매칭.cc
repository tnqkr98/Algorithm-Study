#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; cin >> n;
	vector<char> v;
	for (int i = 0; i < n; i++) {
		char c; cin >> c;
		v.push_back(c);
	}
	char c; cin >> c;
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == c) t++;
	}
	cout << t;
	return 0;
}