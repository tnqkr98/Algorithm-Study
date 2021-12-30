#include <iostream>
using namespace std;
int main() {
	int n,cur=2,inc=2; cin >> n;
	for (int i = 2; i <= n; i++) {
		cur += inc;
		if (i % 2 == 1)
			inc++;
	}
	cout << cur;
	return 0;
}