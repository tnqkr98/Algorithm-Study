#include <iostream>
using namespace std;
int main() {
	int h, w, n, m; cin >> h >> w >> n >> m;
	int nh = 0,nw=0;
	if (h % (n + 1) != 0) nh = h / (n + 1) + 1;
	else nh = h / (n + 1);
	if (w % (m + 1) != 0) nw = w / (m + 1) + 1;
	else nw = w / (m + 1);
	cout << nh * nw;
	return 0;
}