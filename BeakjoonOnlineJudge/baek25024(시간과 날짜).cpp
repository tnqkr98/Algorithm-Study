#include <iostream>
using namespace std;
int main() {
	int arr[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a < 24 && b < 60) cout << "Yes ";
		else cout << "No ";
		if (a < 13 && b <= arr[a] && a!=0 && b!=0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}