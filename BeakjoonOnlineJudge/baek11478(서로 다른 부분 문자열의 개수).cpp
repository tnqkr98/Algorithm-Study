#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
	string s; cin >> s;
	set<string> sub;
	for (int i = 0; i < s.size(); i++) 
		for (int j = 1; j <= s.size()-i; j++) 
			sub.insert(s.substr(i, j));
	cout << sub.size();
	return 0;
}