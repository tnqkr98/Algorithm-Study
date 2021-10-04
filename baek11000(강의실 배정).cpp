#include <cstdio>
#include <queue>
#include <vector>
#include <functional>
#pragma warning(disable:4996)
using namespace std;
struct se { int s, e; };
bool cmp(se a, se b) { return a.s < b.s; };
priority_queue<int, vector<int>, greater<int>> room;
vector<se> time;
int main() {
	int n; scanf("%d", &n);
	while (n--) {
		int s, e; scanf("%d %d", &s, &e);
		time.push_back({ s,e });
	}
	sort(time.begin(), time.end(), cmp);
	room.push(time[0].e);
	for (int i = 1; i < time.size(); i++) {
		if (room.top() <= time[i].s) {
			room.pop();
			room.push(time[i].e);
		}
		else
			room.push(time[i].e);
	}
	printf("%d", room.size());
	return 0;
}