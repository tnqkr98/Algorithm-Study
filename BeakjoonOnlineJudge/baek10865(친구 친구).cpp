#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	vector<int> v(n+1);
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		v[a]++;
		v[b]++;
	}
	for (int i = 1; i <= n; i++) {
		cout<<v[i]<<endl;
	}
	return 0;
}