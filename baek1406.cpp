//https://www.acmicpc.net/problem/1406
// 백준 1406번 : 에디터
// 관련 알고리즘 : Stack

#include <iostream>
#include <stack>
#include <string>
#include <deque>
using namespace std;
int main() {
	int i, m;
	char cmd, ch;
	stack<char> ls,rs;
	deque<char> r;
	string s;
	cin >> s;
	for (i = 0; i < s.size(); i++) 
		ls.push(s[i]);
	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> cmd;
		switch (cmd) {
		case 'L':
			if (!ls.empty()) {
				rs.push(ls.top());
				ls.pop();
			}
			break;
		case 'D':
			if (!rs.empty()) {
				ls.push(rs.top());
				rs.pop();
			}
			break;
		case 'B':
			if (!ls.empty())
				ls.pop();
			break;
		case 'P':
			cin >> ch;
			ls.push(ch);
			break;
		}
	}
	while(!ls.empty()){
		r.push_front(ls.top());
		ls.pop();
	}
	for (i = 0; i < r.size(); i++)
		cout << r[i];
	while(!rs.empty()){
		cout << rs.top();
		rs.pop();
	}
	return 0;
}