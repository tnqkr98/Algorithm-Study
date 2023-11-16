#include <iostream>
using namespace std;
int main() {
	int n,sum=0; cin >> n;
	int a, b, c; cin >> a >> b >> c;
	if (n <= a) sum += n;
	else sum += a;
	if (n <= b) sum += n;
	else sum += b;
	if (n <= c) sum += n;
	else sum += c;
	cout << sum;
	return 0;
}