#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n,sum,before=0;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		sum = t*i;
		cout << sum-before << " ";
		before = t * i;
	}
	return 0;
}