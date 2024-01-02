#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int y; cin >> y;
		int r = y % 100;
		if ((y+1) % r == 0) cout << "Good"<<endl;
		else cout << "Bye"<<endl;
    }
	return 0;
}