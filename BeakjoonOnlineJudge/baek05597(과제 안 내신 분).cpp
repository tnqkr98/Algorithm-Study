#include <iostream>
using namespace std;
bool c[31];
int main() {
	for (int i = 0; i < 28; i++) {
		int t; cin >> t;
		c[t] = 1;
	}
	for (int i = 1; i <= 30; i++) 
		if (!c[i]) cout << i<<endl;
	return 0;
}