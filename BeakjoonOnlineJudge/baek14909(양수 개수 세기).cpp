#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	int num = 0;
	while (1) {
		int a;
		cin >> a;
		if (cin.eof() == 1) { break; }
		if (a > 0) { num++; }
	}
	cout << num << endl;
}