#include <iostream>
using namespace std;
int main() {
	double  A, C, E; cin >> A >> C >> E;
	double a, c, e; cin >> a >> c >> e;
	if (a == A && c == C && e == E) cout << "A";
	else if (a >= A/2 && c == C && e == E) cout << "B";
	else if (c == C && e == E) cout << "C";
	else if (c >= C/2 && e == E) cout << "D";
	else  cout << "E";
	return 0;
}