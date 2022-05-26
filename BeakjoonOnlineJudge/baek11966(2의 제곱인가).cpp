#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int res = 0;
	unsigned long long n; cin >> n;
	for (int i = 0; i <= 30; i++) 
		if (n == pow(2, i)) {
			res = 1;
			break;
		}
	cout << res;
	return 0;
}