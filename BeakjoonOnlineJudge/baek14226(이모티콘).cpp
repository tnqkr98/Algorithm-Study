#include <iostream>
#include <queue>
using namespace std;
struct st { int im, save, t; };
queue<st> q;
bool visit[1002][1002];
int goal;
void bfs() {
	if (q.empty()) return;
	st cur = q.front(); q.pop();
	int im = cur.im, save = cur.save, t = cur.t;
	if (im == goal) {
		cout << t;
		return;
	}
	if (im <= 1001 && im>=1 && !visit[im][save]) {
		visit[im][save] = 1;
		q.push({ im,im,t + 1 });
		if (save != 0) q.push({ im + save,save,t + 1 });
		q.push({ im - 1,save,t + 1 });
	}
	bfs();
}
int main() {
	cin >> goal;
	q.push({ 1,0,0 });
	bfs();
	return 0;
}