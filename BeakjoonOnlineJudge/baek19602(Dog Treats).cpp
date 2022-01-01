#include <iostream>
using namespace std;
int main() {
	int s, m, l;
	cin >> s >> m >> l;
	s = s + 2 * m + 3 * l;
	if (s >= 10) cout << "happy";
	else cout << "sad";


	return 0;
}