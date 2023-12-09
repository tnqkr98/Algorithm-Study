#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	set<string> s;
	s.insert("Never gonna give you up");
	s.insert("Never gonna let you down");
	s.insert("Never gonna run around and desert you");
	s.insert("Never gonna make you cry");
	s.insert("Never gonna say goodbye");
	s.insert("Never gonna tell a lie and hurt you");
	s.insert("Never gonna stop");
	int n; cin >> n; cin.ignore();
	for (int i = 0; i < n; i++) {
		string a; 
		getline(cin, a);
		if (s.count(a) == 0) {
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
	return 0;
}