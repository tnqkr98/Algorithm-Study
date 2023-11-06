#include <iostream>
#include <map>
using namespace std;
int main() {
	string s,g;
	double n,sum=0,nc=0;
	map<string, double> m;
	m["A+"] = 4.5;
	m["A0"] = 4.0;
	m["B+"] = 3.5;
	m["B0"] = 3.0;
	m["C+"] = 2.5;
	m["C0"] = 2.0;
	m["D+"] = 1.5;
	m["D0"] = 1.0;
	m["F"] = 0.0;
	for (int i = 0; i < 20; i++) {
		cin >> s >> n >> g;
		if (g == "P") continue;
		sum += m[g] * n;
		nc += n;
	}
	cout << sum / nc;
	return 0;
}