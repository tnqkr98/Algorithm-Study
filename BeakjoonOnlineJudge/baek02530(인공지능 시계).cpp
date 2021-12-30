#include <iostream>
using namespace std;
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int t = 0;
	t += c + b * 60 + a * 3600 + d;
	t %= 86400;
	if (24 * 3600 <= t) t -= 24 * 3600;
	cout << t / 3600 << " ";
	t %= 3600;
	cout << t / 60 << " " << t % 60;
	return 0;
}