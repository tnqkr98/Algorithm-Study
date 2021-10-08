#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;
unordered_set<int> uset[9];
int main() {
	int k,n; cin >> k>>n;
	vector<int> num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];
	uset[1].insert(k);
	int unit = k;
	for (int i = 2; i <= 8; i++) {
		unit += (k * pow(10, i-1));
		uset[i].insert(unit);
	}

	for (int i = 1; i <= 8; i++) 
		for (int j = 1; j <= 8; j++) {
			if (i + j > 8) continue;
			for (auto ii : uset[i])
				for (auto jj : uset[j]) {
					uset[i + j].insert(ii + jj);
					uset[i + j].insert(ii * jj);
					if(abs(ii-jj)!=0)
						uset[i + j].insert(abs(ii - jj));
					if(ii>=jj)
						uset[i + j].insert(ii/jj);
					else
						uset[i + j].insert(jj/ii);
				}
		}

	for (auto i : num) {
		int res = 0;
		for (int j = 1; j <= 8; j++) {
			if (uset[j].count(i)) {
				res = j;
				break;
			}
		}
		if (res != 0) cout << res << endl;
		else cout << "NO" << endl;
	}
	return 0;
}