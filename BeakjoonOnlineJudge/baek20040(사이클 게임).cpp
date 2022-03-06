#include <iostream>
using namespace std;
int p[500001];
int getp(int a) {
	for (; a != p[a]; a = p[a]);
	return a;
}
void uni(int a, int b) {
	a = getp(a);
	b = getp(b);
	if (a < b) p[b]=a;
	else p[a] = b;
}
int main() {
	int n, m; cin >> n >> m;
	bool flag = 1;
	for (int i = 0; i < n; i++) p[i] = i;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		if (getp(a) != getp(b)) uni(a, b);
		else {
			cout <<i+1;
			flag = 0;
			break;
		}
	}
	if (flag)cout<< 0;
	return 0;
}