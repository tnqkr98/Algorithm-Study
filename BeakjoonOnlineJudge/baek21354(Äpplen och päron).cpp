#include <iostream>
using namespace std;
int main() {
	int a, p; cin >> a >> p;
	int as = a * 7, ps = p * 13;
	if (as > ps) cout << "Axel";
	else if (as == ps) cout << "lika";
	else cout << "Petra";
	return 0;
}