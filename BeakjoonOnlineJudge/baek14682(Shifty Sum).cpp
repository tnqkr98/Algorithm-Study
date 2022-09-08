#include <iostream>
using namespace std;
int main() {
	int n,k; cin >> n >> k;
	int s = n;
	for (int i = 0; i < k; i++) {
		n *= 10;
		s += n;
	}
	cout << s;

	return 0;
}