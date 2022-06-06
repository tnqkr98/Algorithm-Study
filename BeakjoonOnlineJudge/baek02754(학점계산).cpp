#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<string,string> m;
	m["A+"] = "4.3";
	m["A0"] = "4.0";
	m["A-"] = "3.7";
	m["B+"] = "3.3";
	m["B0"] = "3.0";
	m["B-"] = "2.7";
	m["C+"] = "2.3";
	m["C0"] = "2.0";
	m["C-"] = "1.7";
	m["D+"] = "1.3";
	m["D0"] = "1.0";
	m["D-"] = "0.7";
	m["F"] = "0.0";
	string s; cin >> s;
	cout << m[s];
	return 0;
}