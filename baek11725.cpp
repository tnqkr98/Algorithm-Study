//https://www.acmicpc.net/problem/11725
// Baekjoon no.11725 : 트리의 부모 찾기
// Algorithm : Tree

#include <iostream>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int parent[100001] = { 0 };
vector<vector<int>> v(100001);
void find(int p) {
	for (int i = 0; i < v[p].size(); i++) 
		if (!parent[v[p][i]]) {
			parent[v[p][i]] = p;
			find(v[p][i]);
		}
}
int main() {
	int n,a,b,c=0;
	scanf("%d", &n);
	parent[1] = 1;
	for (int i = 0; i < n - 1; i++) {
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	find(1);
	for (int i = 2; i <= n; i++)
		printf("%d\n", parent[i]);
	
	return 0;
}