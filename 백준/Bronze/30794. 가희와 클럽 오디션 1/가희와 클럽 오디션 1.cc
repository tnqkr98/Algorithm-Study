#include <iostream>
#include <map>
using namespace std;
int main() {
	int n; string s;
	map<string, int> m;
	m["miss"] = 0;
	m["bad"] = 200;
	m["cool"] = 400;
	m["great"] = 600;
	m["perfect"] =1000;
	cin >> n >> s;
	cout << m[s] * n;
	return 0;
}