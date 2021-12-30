#include <iostream>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	if (a + b + c >= 100) cout << "Ok";
	else {
		if (a < b&&a < c) cout << "Soongsil";
		else if (b < a&&b < c) cout << "Korea";
		else if(c<b&&c<a) cout << "Hanyang";
	}

	return 0;
}