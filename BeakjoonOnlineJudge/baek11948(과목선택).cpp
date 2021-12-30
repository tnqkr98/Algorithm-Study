#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int> a(4), b(2);
	for (int i = 0; i < 4; i++)cin >> a[i];
	for (int i = 0; i < 2; i++)cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	cout << a[1] + a[2] + a[3] + b[1];
	return 0;
}