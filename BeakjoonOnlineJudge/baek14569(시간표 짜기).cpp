#include <iostream>
#include <vector>
using namespace std;
vector<long long> cls;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		long long bit =0;
		for (int j = 0; j < k; j++) {
			long long t; cin >> t;
			bit = bit | (1LL << t);
		}
		cls.push_back(bit);
	}
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int p; cin >> p;
		long long time = 0;
		for (int j = 0; j < p; j++) {
			long long  q; cin >> q;
			time = time | (1LL << q);
		}
		int cnt = 0;
		for (int j = 0; j < n; j++) 
			if ((time & cls[j]) == cls[j])
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}