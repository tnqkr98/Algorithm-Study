#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int t = 0,arr[3];
		for (int j = 0; j < 3; j++) {
			cin >> arr[j];
			if (arr[j] >= 10) t++;
		}
		for (auto a : arr)cout << a << " ";
		cout << endl;
		if (t == 3) cout << "triple-double" << endl;
		else if (t == 2) cout << "double-double" << endl;
		else if (t == 1) cout << "double" << endl;
		else cout << "zilch" << endl;
		cout << endl;
	}
	return 0;
}