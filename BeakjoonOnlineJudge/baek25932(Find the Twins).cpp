#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int m = 0, z = 0;
		for (int j = 0; j < 10; j++) {
			int a; cin >> a;
			if (a == 18)m++;
			if (a == 17)z++;
			cout << a << " ";
		}
		if (z== 1 && m==1) cout << "both";
		else if (m == 1) cout << "mack";
		else if (z == 1) cout << "zack";
		else if (z + m == 0) cout << "none";
		 cout << endl << endl;
	}



	return 0;
}