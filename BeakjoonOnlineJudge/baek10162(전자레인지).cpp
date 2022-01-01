#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	int a = 300, b = 60, c = 10, arr[3];
	if (t >= 300) arr[0] = t / a;
	else arr[0] = 0;
	t %= a;
	if (t >= 60) arr[1] = t / b;
	else arr[1] = 0;
	t %= b;
	if (t >= 10) arr[2] = t / c;
	else arr[2] = 0;
	t %= c;

	if (t != 0) cout << -1;
	else {
		for (int i = 0; i < 3; i++)
			cout << arr[i] << " ";
	}
	return 0;
}