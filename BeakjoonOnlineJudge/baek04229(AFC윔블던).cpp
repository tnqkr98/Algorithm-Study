#include <iostream>
using namespace std;
int main() {
	double a, b; cin >> a >> b;
	double big = (a + b)/2;
	int small = a - (int)big;
	if (big > (int)big || a<b)
		cout << -1;
	else if ((int)big + small == a && (int)big - small == b)
		cout << (int)big << " " << small; 
	else cout << -1;
	return 0;
}