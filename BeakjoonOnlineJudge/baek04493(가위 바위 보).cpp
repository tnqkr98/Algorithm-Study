#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int p1 = 0, p2 = 0;
		while (n--) {
			char a, b; cin >> a >> b;
			if (a == b) continue;
			else if (a == 'R' && b == 'P') p2++;
			else if (a == 'R' && b == 'S') p1++;
			else if (a == 'S' && b == 'P') p1++;
			else if (a == 'S' && b == 'R') p2++;
			else if (a == 'P' && b == 'S') p2++;
			else if (a == 'P' && b == 'R') p1++;
		}
		if (p1 == p2) cout << "TIE" << endl;
		else if (p1 > p2) cout << "Player 1" << endl;
		else cout << "Player 2" << endl;
	}
	return 0;
}