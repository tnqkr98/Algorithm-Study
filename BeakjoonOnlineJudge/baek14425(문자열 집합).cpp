#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	set<string> s;
	for (int i = 0; i < n; i++) {
		string t; cin >> t;
		s.insert(t);
	}
	int c = 0;
	for (int i = 0; i < m; i++) {
		string t; cin >> t;
		if (s.count(t) > 0) c++;
	}
	cout << c;
	return 0;
}