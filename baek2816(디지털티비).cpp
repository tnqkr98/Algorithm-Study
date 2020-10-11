#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	int k1, k2;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "KBS1") k1 = i;
		if (s == "KBS2") k2 = i;
	}
	for (int i = 0; i < k1; i++) 
		cout << 1;
	for(int i = 0; i < k1; i++)
		cout << 4;
	for (int i = 0; i < k2; i++)
		cout << 1;
	for (int i = 0; i < k2-1; i++)
		cout << 4;
	return 0;
}