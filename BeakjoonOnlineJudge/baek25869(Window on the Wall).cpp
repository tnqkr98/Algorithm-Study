#include <iostream>
using namespace std;
int main() {
	int w, h, d; cin >> w >> h >> d;
	if(w - d * 2>0 && h - d * 2>0) cout << (w - d * 2) * (h - d * 2);
	else cout << 0;
	return 0;
}