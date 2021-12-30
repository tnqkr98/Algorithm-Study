#include <iostream>
#include <queue>
using namespace std;
int f, s, g, u, d;
int minarr[1000001];
typedef struct {int i, c;} IC;
queue<IC> q;
void bfs() {
	if (q.empty()) return;
	int i, c,ni,nc;
	i = q.front().i;
	c = q.front().c;
	q.pop();
	
	if (i + u <= f) {
		ni = i + u;
		nc = c + 1;
		if (minarr[ni] == 0 || minarr[ni] > nc) {
			minarr[ni] = nc;
			q.push({ ni,nc });
		}
	}

	if (i - d >= 1) {
		ni = i - d;
		nc = c + 1;
		if (minarr[ni] == 0 || minarr[ni] > nc) {
			minarr[ni] = nc;
			q.push({ ni,nc });
		}
	}
	bfs();
}
int main() {
	cin >> f >> s >> g >> u >> d;
	if (s != g) {
		q.push({ s,0 });
		bfs();
		if (minarr[g] != 0)
			cout << minarr[g];
		else
			cout << "use the stairs";
	}
	else if(s == g)
		cout << 0;
	return 0;
}