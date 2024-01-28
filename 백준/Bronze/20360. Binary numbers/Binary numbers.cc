#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> v;
	while (n) {
		v.push_back(n % 2);
		n /= 2;
	}

	for (int i = 0; i <v.size(); i++) {
		if (v[i] == 1) cout << i << " ";
	}

	return 0;
}