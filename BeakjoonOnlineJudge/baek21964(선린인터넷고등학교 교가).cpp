#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	string s; cin >>s;
	cout << s.substr(s.size() - 5, 5);
	return 0;
}