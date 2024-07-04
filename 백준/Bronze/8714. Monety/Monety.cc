#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int o = 0;
	int l = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a == 1) l++;
		else o++;
	}
	if (o > l) printf("%d\n", l);
	else printf("%d\n", o);
	return 0;
}