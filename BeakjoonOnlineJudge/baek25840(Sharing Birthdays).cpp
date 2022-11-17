#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	set<string> s;
	int n; cin >> n;
	while (n--) {
		string st; cin >> st;
		s.insert(st);
	}
	cout << s.size();
	return 0;
}