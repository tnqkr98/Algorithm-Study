#include <iostream>
using namespace std;
int main() {
	int ps=0,pw=0, ss = 0,sw=0,pal=0,sal=0;
	int p, s; cin >> p >> s;
	if (p > s) pw++;
	else if (p < s)sw++;
	ss += s;
	pal += p;
	sal += s;
	cin >> s >> p;
	if (p > s) pw++;
	else if (p < s)sw++;
	ps += p;
	pal += p;
	sal += s;
	if (pw > sw) cout << "Persepolis";
	else if (pw < sw) cout << "Esteghlal";
	else {
		if (pal < sal)cout << "Esteghlal";
		else if (pal > sal)  cout << "Persepolis";
		else {
			if (ss < ps) cout << "Persepolis";
			else if (ss > ps) cout << "Esteghlal";
			else cout << "Penalty";
		}

	}
	return 0;
}