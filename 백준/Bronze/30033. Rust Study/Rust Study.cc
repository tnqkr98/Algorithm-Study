#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n,c=0; cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int g; cin >> g;
		a.push_back(g);
	}
	for (int i = 0; i < n; i++) {
		int g; cin >> g;
		if (g >= a[i]) c++;
	}
	cout << c;
	return 0;
}