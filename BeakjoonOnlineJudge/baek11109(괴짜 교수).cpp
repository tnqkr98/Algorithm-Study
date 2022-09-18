#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int d, n, s, p; cin >> d >> n >> s >> p;
		int ss = n * s, pp = d + p*n;
		if (ss > pp) cout << "parallelize" << endl;
		else if (ss < pp) cout << "do not parallelize" << endl;
		else cout << "does not matter" << endl;
	}




	return 0;
}