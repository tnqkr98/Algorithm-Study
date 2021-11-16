#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
struct nw { int n, w; };
vector<vector<nw>> adj(1001);
int n, d[1001];// d�� Ʈ���� �̷�� ������հ� �� �� ��� ���հ��� �Ÿ���.
bool visit[1001];
long long prim() {
	long long cost = 0;  
	for (int i = 0; i < n; i++) d[i] = 1e9;
	visit[0] = 1; // ���� ����  0

	for (auto near : adj[0]) // ó���� ���տ� ���������ۿ� ���⿡ �� �ֺ� d�迭 �� ����
		d[near.n] = near.w;

	for (int i = 1; i < n; i++) {
		int new_cur = 0, minw = 1e9;
		for (int j = 1; j < n; j++) {	//������ �ֺ� �� �湮���� ���� ��� �� �ּ� ���ã��
			if (!visit[j] && d[j] < minw) { //visit �迭������ ���� ���δ� ����
				new_cur = j;
				minw = d[j];
			}
		}
	
		cost += minw;		// ��� �ջ�
		visit[new_cur] = 1;	// ���տ� �߰��� new_cur
		for (auto near : adj[new_cur])	// �߰��� ������ �����ؼ� �ֺ����� �ּҺ�� ����
			d[near.n] = min(d[near.n], near.w);
	}

	return cost;
}
int main() {
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			int w = 0; scanf("%d", &w);
			adj[i].push_back({j,w});
		}

	printf("%lld",prim());
	return 0;
}