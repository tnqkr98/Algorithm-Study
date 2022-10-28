#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	int arr[27] = { 0 };
	for (auto i : s) 
		arr[i - 'a']++;
	int e = 0, o = 0;
	for (auto i : arr) {
		if (i == 0)continue;
		if (i % 2 == 0) e++;
		else o++;
	}
	if (e > 0 && o > 0) cout << 2;
	else if (e > 0) cout << 0;
	else cout << 1;
	return 0;
}