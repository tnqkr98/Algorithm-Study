#include <iostream>
using namespace std;
int parent[201];
int getp(int a) {
	for (; parent[a] != a; a = parent[a]);
	return a;
}
void Union(int a, int b) {
	a = getp(a);
	b = getp(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
int main() {
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++) parent[i] = i;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			int l; cin >> l;
			if (l) {
				int a ,b;
				a = getp(i);
				b = getp(j);
				if (a != b) Union(i, j);
			}
		}

	int first,flag=0;
	for (int i = 0; i < m; i++) {
		int t; cin >> t;
		if (i == 0) first = getp(t);
		else if (first != getp(t)) {
			flag = 1;
			break;
		}
	}
	if (flag) cout << "NO";
	else cout << "YES";
	return 0;
}