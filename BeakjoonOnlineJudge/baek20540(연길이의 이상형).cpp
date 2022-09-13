#include <iostream>
using namespace std;
int main() {
	string n; cin >> n;

	if (n[0] == 'I') cout << "E";
	else cout << "I";
	if (n[1] == 'S') cout << "N";
	else cout << "S";
	if (n[2] == 'T') cout << "F";
	else cout << "T";
	if (n[3] == 'J') cout << "P";
	else cout << "J";


	return 0;
}