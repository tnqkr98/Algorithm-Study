#include <iostream>
using namespace std;
int main() {
	int arr[4];
	for (int i = 0; i < 4; i++)cin >> arr[i];
	int a, b, c, n = 0; cin >> a >> b >> c;
	for (int i = 0; i < 4; i++) {
		if (a == arr[i]) n = i + 1;
	}
	cout << n;
	return 0;
}