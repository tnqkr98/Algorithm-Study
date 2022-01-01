#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	if (a > 2) cout << "after";
	else if (a < 2) cout << "before";
	else {
		if(b>18) cout << "after";
		else if(b<18)  cout << "before";
		else cout << "special";
	}


	return 0;
}