#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int ec=0, oc=0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a % 2 == 0) ec++;
		else oc++;
	}
	if (ec > oc) cout << "Happy";
	else cout << "Sad";
	return 0;
}