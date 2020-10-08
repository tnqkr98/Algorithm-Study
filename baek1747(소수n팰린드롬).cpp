#include <string>
#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i*i <= n; i++) 
		if (n%i == 0) return false;
	return true;
}

bool isPel(string n) {
	for (int i = 0; i < n.size() / 2; i++)
		if (n[i] != n[n.size() - i - 1])
			return false;
	return true;
}

int main() {
	int n; cin >> n;
	while (n!=1&&1) {
		string num = to_string(n);
		if (isPel(num)) {
			if (isPrime(n)) {
				cout << n;
				break;
			}
		}
		n++;
	}
	if (n == 1) cout << 2;
	return 0;
}