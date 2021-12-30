 // https://www.acmicpc.net/problem/1717
 // baekjoon No.1717 : 집합의 표현
 // Algorithm : Disjoint Set (union find)
#include <cstdio>
#pragma warning(disable:4996)
int *parent;
int find(int i) {
	for (; parent[i] >= 0; i = parent[i]);
	return i;
}

void wunion(int i, int j) {
	int a, b,temp;
	a = find(i); b = find(j);
	if (a == b)
		return;
	temp = parent[a] + parent[b];
	if (parent[a] > parent[b]) {
		parent[a] = b;
		parent[b] = temp;
	}
	else {
		parent[b] = a;
		parent[a] = temp;
	}
}

int main() {
	int n, m,i,cmd,a,b;
	scanf("%d %d", &n, &m);
	parent = new int[n+1];
	for (i = 0; i <= n; i++) 
		parent[i] = -1;
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &cmd, &a, &b);
		if (a == b && cmd) {
			printf("YES\n");
			continue;
		}
		else if (a == b && !cmd)
			continue;
		if (cmd == 0)
			wunion(a, b);
		else if (find(a) == find(b))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}