#include <iostream>
using namespace std;
int main() {
	int n, k, a, b; cin >> n >> k >> a >> b;
	cout << (k-1) * b + (n-1) * b << " " << a * (n-1);
	return 0;
}