#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int c = (a + b) % 24;
	if (c > 12) cout << c - 12;
	else if(c==0) cout << 12;
	else cout << c;


	return 0;
}