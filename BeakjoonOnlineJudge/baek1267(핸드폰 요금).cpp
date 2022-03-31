#include <iostream>
using namespace std;
int main() {
	int n,y=0,m=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		m += 15; y += 10;
		y += (t / 30) * 10;
		m += (t / 60) * 15;
	}
	if (y < m) cout << "Y " << y;
	else if (y > m) cout << "M "<<m;
	else cout << "Y M "<< y;
	return 0;
}