#include <cstdio>
#include <memory.h>
#include <queue>
#include <string>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
queue<pair<int, string>> q;
int e;
bool visit[10000];
void bfs() {
	if (q.empty()) return;
	auto cur = q.front(); q.pop();
	if (cur.first == e) {
		printf("%s\n", cur.second.c_str());
		return;
	}
	int num = cur.first;
	num *= 2;
	num %= 10000;
	if (!visit[num]) {
		visit[num] = 1;
		q.push({ num,cur.second + "D" });
	}
	num = cur.first;
	num -= 1;
	if (num == -1) num = 9999;
	if (!visit[num]) {
		visit[num] = 1;
		q.push({ num,cur.second + "S" });
	}
	num = cur.first;
	int res = (num * 10) % 10000 + num / 1000;
	if (!visit[res]) {
		visit[res] = 1;
		q.push({ res,cur.second + "L" });
	}
	num = cur.first;
	int res2 = num / 10 + (num % 10) * 1000;
	if (!visit[res2]) {
		visit[res2] = 1;
		q.push({ res2,cur.second + "R" });
	}
	bfs();
}
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		memset(visit, 0, sizeof(visit));
		while (!q.empty()) q.pop();
		int start; scanf("%d %d", &start, &e);
		visit[start] = 1;
		q.push({ start,"" });
		bfs();
	}
	return 0;
}