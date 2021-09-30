#include <iostream>
#include <string>
#include <vector>
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

vector<int> kmp(string &src, string &search) {
	vector<int> res;
	vector<int> pi = failure(search);
	int begin = 0,match=0;
	while (begin + match <= src.size()) {
		if (match < search.size() && src[begin + match] == search[match]) {
			match++;
			if (match == search.size())
				res.push_back(begin);
		}
		else {
			if (match == 0)	begin++;
			else {
				begin += match - pi[match - 1];
				match = pi[match - 1];
			}
		}
	}
	return res;
}

int main() {
	string s, p; cin >> s >> p;
	vector<int> res = kmp(s, p);
	if (res.size() > 0) cout << 1;
	else cout << 0;
	return 0;
}