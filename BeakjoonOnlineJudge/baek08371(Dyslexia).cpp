#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,c=0; cin >> n;
	string a, b; cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) c++;
	}
	cout << c;
	return 0;
}