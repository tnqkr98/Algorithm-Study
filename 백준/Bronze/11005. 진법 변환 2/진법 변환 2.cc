#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<char> s;
	int a, b; cin >> a >> b;
	int d = a,t;
	while (d >= b) {
		t = d % b;
		if (t < 10) s.push('0' + t);
		else s.push('A' + t - 10);

		d = d / b;
	}

	if (d < 10) s.push('0' + d);
	else s.push('A' + d - 10);

	while (s.empty() == false) {
		cout << s.top();
		s.pop();
	}
	return 0;
}