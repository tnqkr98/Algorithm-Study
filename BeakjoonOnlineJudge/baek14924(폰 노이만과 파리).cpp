#include <iostream>
using namespace std;
int main() {
	int s, t, d; cin >> s >> t >> d;
	cout << ((int)(d / (s * 2)))*t;
	return 0;
}