#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
struct ns {
	long long n;
	string s;
};
long long s, t, flag = 0;
set<long long> visit;
queue<ns> q;
string res = "";
void bfs() {
	if (q.empty()) return;
	auto cur = q.front(); q.pop();
	if (cur.n == t) {
		if (res == "") res = cur.s;
		else if (res.compare(cur.s) < 0) res = cur.s;
		flag = 1;
	}
	else if(cur.n <= 1000000000){
		if (visit.find(cur.n*cur.n) == visit.end()) {
			visit.insert(cur.n*cur.n);
			q.push({ cur.n*cur.n,cur.s + "*" });
		}
		if (visit.find(cur.n + cur.n) == visit.end()) {
			visit.insert(cur.n + cur.n);
			q.push({ cur.n + cur.n,cur.s + "+" });
		}
		if (cur.n != 0 && visit.find(cur.n / cur.n) == visit.end()) {
			visit.insert(cur.n / cur.n);
			q.push({ cur.n / cur.n,cur.s + "/" });
		}
		if (visit.find(cur.n - cur.n) == visit.end()) {
			visit.insert(cur.n - cur.n);
			q.push({ cur.n - cur.n,cur.s + "-" });
		}
	}
	bfs();
}
int main() {
	cin >> s >> t;
	if (s != t) {
		visit.insert(s);
		q.push({ s,"" });
		bfs();
	}
	else {
		cout << 0;
		flag = 1;
	}
	if (flag != 1) cout << -1;
	else cout << res;
	return 0;
}