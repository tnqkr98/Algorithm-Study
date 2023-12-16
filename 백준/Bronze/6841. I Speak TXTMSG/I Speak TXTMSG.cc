#include <iostream>
#include <map>
using namespace std;
int main() {
	map<string, string> m;
	m["CU"] = "see you";
	m[":-)"] = "I’m happy";
	m[":-("] = "I’m unhappy";
	m[";-)"] = "wink";
	m[":-P"] = "stick out my tongue";
	m["(~.~)"] = "sleepy";
	m["TA"] = "totally awesome";
	m["CCC"] = "Canadian Computing Competition";
	m["CUZ"] = "because";
	m["TY"] = "thank-you";
	m["YW"] = "you’re welcome";
	m["TTYL"] = "talk to you later";
	while (1) {
		string a; cin >> a;
		if (a == "TTYL") {
			cout << m[a];
			return 0;
		}
		if (m.find(a) == m.end()) {
			cout << a <<endl;
		}
		else {
			cout << m[a] << endl;
		}
	}
	return 0;
}