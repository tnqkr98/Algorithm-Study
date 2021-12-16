#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
vector<long long int> v,segTree;
long long int treeInit(int s,int e, int n) {
	if (s == e) return segTree[n] = v[s];
	int mid = (s + e) / 2;
	return segTree[n] = treeInit(s, mid, n * 2) + treeInit(mid + 1, e, n * 2 + 1);
}

// ���� ���ϰ��� �ϴ� �ε��� ���� l~r (����)
// �˻縦 �ϴ� �ε��� ���� s~e
// �ձ��ϴ� �ε��� ���� �ۿ���, 0
// �˻��ϴ� ����(s~e)�� �ձ��Ϸ��� �ε��� ����(l~r)�ȿ� 
// ������ ���ԵǸ� �� ����(���� �ճ�� ��, �ٸ����� ���� �Ȱ�ħ)
long long int sum(int s, int e, int n, int l, int r) {
	if (l > e || r < s) return 0;	// ������
	if (l <= s && e <= r) return segTree[n]; // ������

	// ������ �Ȱɷ�����, �� �κ����� ������ �� ����
	int mid = (s + e) / 2;
	return sum(s, mid, n * 2, l, r) + sum(mid + 1, e, n * 2 + 1, l, r);
}

// ���� ����Ǵ� �ε����� Ž�� ������ ���ԵǾ��ִٸ� ������Ʈ
void update(int s, int e,int n,int idx, long long int dif) {
	if (idx > e || idx < s) return;
	segTree[n] += dif;	// �������̸� '����'���� �̿��� ����
	if (s == e) return;
	int mid = (s + e) / 2;
	update(s, mid, n * 2, idx, dif);
	update(mid + 1, e, n * 2 + 1, idx, dif);
}
int main() {
	int n, m, k; scanf("%d %d %d", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		long long int t; scanf("%lld", &t);
		v.push_back(t);
	}
	segTree = vector<long long int>(n * 4);
	treeInit(0, n - 1, 1);
	for (int i = 0; i < m + k; i++) {
		long long int a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
		if (a == 1) {
			long long dif = c - v[b - 1];
			v[b - 1] = c;
			update(0, n - 1, 1, b - 1,dif);
		}
		else
			printf("%lld\n", sum(0, n - 1, 1, b - 1, c - 1));
		
	}
	return 0;
}