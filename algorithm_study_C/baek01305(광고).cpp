#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> failure(string s) {	
	vector<int> pi(s.size(), 0);
	int match = 0, begin = 1;
	while (begin + match < s.size()) {
		if (s[begin + match] == s[match]) {
			match++;
			pi[begin + match - 1] = match;
		}
		else {
			if (match == 0) begin++;
			else {
				begin += match - pi[match - 1];
				match = pi[match - 1];
			}
		}
	}
	return pi;
}
int main() {
	int n; string s;
	cin >> n >> s;
	vector<int> pi = failure(s);
	if (pi[n - 1] == n - 1) cout << 1;
	else if (pi[n - 1] == 0) cout << n;
	else {
		cout << pi[n - 1] + (n - pi[n - 1] * 2);
	}
	return 0;
}