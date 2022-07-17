#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s.size() > 5 && s.size() < 10) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}