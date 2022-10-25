#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int w,s=0; cin >> w;
		if (w >= 1000) {
			s += 1000 * a;
			s += (w-1000) * b;
		} else s = w * a;
		cout << w << " " << s << endl;
	}


	return 0;
}