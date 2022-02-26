#include <iostream>
using namespace std;
int main() {
	int y, m, d; cin >> y >> m >> d;
	int y1, m1, d1; cin >> y1 >> m1 >> d1;
	if (m * 30 + d <= m1 * 30 + d1) cout << y1 - y;
	else cout << y1 - y - 1;
	cout << endl<<y1 - y + 1<<endl << y1 - y << endl;
	return 0;
}