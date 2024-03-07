#include <iostream>
#include <stack>
using namespace std;
int main() {
	string s; cin >> s;
	stack<char> st;
	int c = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		st.push(s[i]);
		c++;
		if (i == 0 && s.length() % 3 == 0) break;
		if (c % 3 == 0) st.push(',');
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	return 0;
}