#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	int a[26] = { 0 };
	for (auto i : s)a[i - 'a']++;
	for (auto i : a)cout << i<<" ";
	return 0;
}