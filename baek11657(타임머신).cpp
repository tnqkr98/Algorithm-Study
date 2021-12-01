#include <iostream>
#include <vector>
using namespace std;
struct ew {int e, w;};
int dist[501],n;	// dist: ���������κ��� �ִܰŸ�
vector<ew> v[501];
bool BellmanFord() {
	for (int i = 1; i <= n; i++) dist[i] = 1e9;
	dist[1] = 0;

	for(int i=1;i<=n;i++)	// ������ �����ϴ� Ƚ��
		for(int j=1;j<=n;j++)	// ����� : j
			for (auto near : v[j]) {
				if (dist[j] == 1e9) 
					continue;
				else if (dist[near.e]>dist[j]+near.w) {	// j-?j�� near�� ���� �Ÿ��� ���Ű����ϸ�
					dist[near.e] = dist[j] + near.w;
					if (i == n)		// ���� n���� ������ �����ϴµ� �ִܰŸ��� �����ȴٸ� ����Ŭ�� �����ϴ°�
						return false;	// ����Ŭ����
				}
			}
	return true;
}
int main() {
	int m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int s, e, w; cin >> s >> e >> w;
		v[s].push_back({ e,w });
	}
	if (BellmanFord()) {
		for (int i = 2; i <= n; i++) {
			if (dist[i] == 1e9) cout << "-1\n";
			else cout << dist[i] << "\n";
		}
	}
	else cout << -1;

	return 0;
}