#include <iostream>
using namespace std;
int main() {
	int m, arr[4] = { 0,1,2,3 }; cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y; cin >>x>>y;
		int t = arr[y];
		arr[y] = arr[x];
		arr[x] = t;
	}
	for (int i = 1; i <= 3; i++) 
		if (arr[i] == 1) {
			cout << i;
			break;
		}
	return 0;
}