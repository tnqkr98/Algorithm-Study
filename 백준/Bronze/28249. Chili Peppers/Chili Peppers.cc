#include <iostream>
#include <map>
using namespace std;
int main() {
	int n,sum=0; cin >> n;
	map<string, int> m;
	m["Poblano"] = 1500;
	m["Mirasol"] = 6000;
	m["Serrano"] = 15500;
	m["Cayenne"] = 40000;
	m["Thai"] = 75000;
	m["Habanero"] = 125000;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		sum += m[s];
	}
	cout << sum;
	return 0;
}