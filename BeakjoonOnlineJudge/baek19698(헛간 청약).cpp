#include <iostream>
using namespace std;
int main() {
	int n, w, h, l; cin >> n >> w >> h >> l;
	int res = (w / l) * (h / l);
	if (res > n) cout << n;
	else cout << res;
	return 0;
}