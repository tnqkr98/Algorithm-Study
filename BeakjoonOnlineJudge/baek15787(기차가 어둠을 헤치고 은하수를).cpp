#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
	int n,m, val = 0; cin>>n>>m;
	for (int i = 1; i <= 20; i++) 
		val = val | (1 << i);
	vector<int> v(n+1, 0);
	for (int i = 0; i < m; i++) {
		int c, t, x; cin >> c >> t;
		if (c == 1) {
			cin >> x;
			v[t] = v[t] | (1 << x);
		}
		else if (c == 2) {
			cin >> x;
			v[t] = v[t] & ~(1 << x);
		}
		else if (c == 3) {
			v[t] = v[t] << 1;
			v[t] = v[t] & val;
		}
		else {
			v[t] = v[t] >> 1;
			v[t] = v[t] & val;
		}	
	}
	set<int> s;
	for (int i = 1; i <= n; i++) 
		if (!s.count(v[i])) 
			s.insert(v[i]);
	cout << s.size();
	return 0;
}