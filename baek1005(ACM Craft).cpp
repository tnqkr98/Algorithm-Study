#include <iostream>
#include <vector>
#include <memory.h>
#include <queue>
using namespace std;
int time[1001],in[1001],n,w;
vector<int> graph[1001];
queue<int> q;	// ���������� 0�� ��
priority_queue<int> pq[1001];	// �ִ���,Ư����尡 ���������� 0�� �ɋ�, ���� ������ ���� �����ɸ� �۾��� �ɸ� �ð� ��ȯ
void topology() {
	for(int i=1;i<=n;i++)
		if (in[i] == 0) 
			q.push(i);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (auto next : graph[cur]) {
			in[next]--;
			pq[next].push(time[cur]);
			if (in[next] == 0) {
				time[next]+=pq[next].top();
				q.push(next);
				if (next == w) 
					break;
			}
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int k; cin >> n >> k;
		memset(time, 0, sizeof(time));
		memset(in, 0, sizeof(time));
		for (int i = 1; i <= n; i++) {
			cin >> time[i];
			graph[i].clear();
			while (!pq[i].empty()) pq[i].pop();
		}
		for (int i = 0; i < k; i++) {
			int s, e; cin >> s >> e;
			graph[s].push_back(e);
			in[e]++;
		}
		cin >> w;
		topology();
		cout << time[w] << endl;
	}
	return 0;
}