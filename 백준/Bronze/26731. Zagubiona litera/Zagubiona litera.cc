#include <iostream>
using namespace std;
int main() {
	int arr[26] = {0};
	string s; cin >> s;
	for (int i = 0; i < 25; i++) {
		arr[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] == 0) cout << (char)('A' + i);
	}

	return 0;
}