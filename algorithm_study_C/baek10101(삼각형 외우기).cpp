#include <iostream>
using namespace std;
int main() {
	int a[3],s=0,c=0;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
		s += a[i];
		if (a[i] == 60)c++;
	}
	if (s != 180) cout << "Error";
	else if (c == 3) cout << "Equilateral";
	else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) cout << "Isosceles";
	else cout << "Scalene";
	return 0;
}