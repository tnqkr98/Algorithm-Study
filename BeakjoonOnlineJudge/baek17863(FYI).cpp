#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	if (s.substr(0, 3) == "555") cout << "YES";
	else cout<<"NO";
	return 0;
}