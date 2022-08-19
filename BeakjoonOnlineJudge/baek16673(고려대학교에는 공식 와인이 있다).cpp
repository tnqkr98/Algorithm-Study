#include <iostream>
using namespace std;
int main() {
	int c, k, p; cin >> c >> k >> p;
	int s = 0;
	for (int i = 0; i <= c; i++) 
		s += k * i + p * i * i;
	cout << s;
	return 0;
}