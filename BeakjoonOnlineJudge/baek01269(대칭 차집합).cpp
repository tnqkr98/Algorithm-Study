#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	vector<int> av, bv;
	set<int>A, B,C;
	for (int i = 0; i < a; i++) {
		int t; cin >> t;
		A.insert(t);
		av.push_back(t);
	}
	for (int i = 0; i < b; i++) {
		int t; cin >> t;
		B.insert(t);
		bv.push_back(t);
	}
	for (int i = 0; i < av.size(); i++) {
		if (B.count(av[i]) == 0) C.insert(av[i]);
	}
	for (int i = 0; i < bv.size(); i++) {
		if (A.count(bv[i]) == 0) C.insert(bv[i]);
	}
	cout << C.size();
	return 0;
}