#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		for (int j = 0; j < a / 5; j++) {
			cout << "++++ ";
		}
		for (int j = 0; j < a % 5; j++) {
			cout << "|";
		}
		cout << endl;
	}
	return 0;
}