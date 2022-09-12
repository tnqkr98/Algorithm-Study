#include <iostream>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	int s = 0;
	for (int i = 1; i <= n; i++) 
		if (n % i == 0) {
			s++;
			if (s == k) {
				s = i;
				break;
			}
		}
	if (s < k) cout << 0;
	else cout << s;
	return 0;
}