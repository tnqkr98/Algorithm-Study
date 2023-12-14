#include <iostream>
#include <string>
using namespace std;
int main() {
	string n; cin >> n;
	int num = stoi(n);
	if (n.find('7') == -1 && num % 7 != 0) cout << 0;
	if (n.find('7') == -1 && num % 7 == 0) cout << 1;
	if (n.find('7') != -1 && num % 7 != 0) cout << 2;
	if (n.find('7') != -1 && num % 7 == 0) cout << 3;
	return 0;
}