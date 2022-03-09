#include <iostream>
using namespace std;
int main() {
	int s, a, b; cin >> s >> a >> b;
	int sum;
	
	if (s > a) {
		sum = (s - a) / b * 100 + 250;
		if ((s - a) % b == 0) cout << sum;
		else cout << sum + 100;
	}
	else if (s <= a) cout << 250;


	return 0;
}