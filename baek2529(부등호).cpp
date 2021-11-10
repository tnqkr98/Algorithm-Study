#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std;
int bu[10] = { 0 },n;
bool visit[10];
deque<int> dq;
vector<string> v;
void back(int d) {
	if (d == n) {
		string s="";
		for (int i = 0; i <= n; i++)
			s+=to_string(dq[i]);
		v.push_back(s);
		return;
	}
	for (int i = 0; i <= 9; i++) {
		if (!visit[i] && ((bu[d] == 0 && dq.back() > i)||(bu[d] == 1&&dq.back() < i))) {
			dq.push_back(i);
			visit[i] = 1;
			back(d + 1);
			visit[i] = 0;
			dq.pop_back();
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		char b; cin >> b;
		if (b == '<') bu[i] = 1;
	}
	for (int i = 0; i <= 9; i++) {
		dq.push_back(i);
		visit[i] = 1;
		back(0);
		visit[i] = 0;
		dq.pop_back();
	}
	cout << *(v.end() - 1) <<endl<< v[0];
	return 0;
}