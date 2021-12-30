#include <iostream>
using namespace std;
int main() {
	int n,t,c=0; cin >> n;
	for (int i = 0; i < 5; i++) {
		cin >> t;
		if (t == n)c++;
	}
	cout << c;
	return 0;
}