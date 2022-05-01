#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	while (1) {
		int a[3];
		for (int i = 0; i < 3; i++) cin >> a[i];
		sort(a, a + 3);
		if (a[0] == 0 && a[0] == a[1] && a[1] == a[2]) break;
		if (a[2] >= a[0] + a[1]) 
			cout << "Invalid"<<endl;
		else {
			if (a[2] == a[1] && a[1] == a[0])
				cout << "Equilateral" << endl;
			else if (a[2] == a[1] || a[2] == a[0] || a[0] == a[1])
				cout << "Isosceles" << endl;
			else cout << "Scalene" << endl;
		}
	}
	return 0;
}