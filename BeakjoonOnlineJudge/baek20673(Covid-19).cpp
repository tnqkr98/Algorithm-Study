#include <iostream>
using namespace std;
int main() {
	int c, h; cin >> c >> h;
	if (c <= 50 && h <= 10) cout << "White";
	else if (h > 30) cout << "Red";
	else cout << "Yellow";


	return 0;
}