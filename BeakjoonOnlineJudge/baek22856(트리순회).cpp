#include <iostream>
using namespace std;
bool visit[100001];
int p[100001],tree[100001][2],iend=0;
void inorder(int root) {
	if (tree[root][0] != -1) inorder(tree[root][0]);
	iend = root;
	if (tree[root][1] != -1) inorder(tree[root][1]);
}
int main() {
	int n,move=0,c=0,cur=1,node,l,r;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> node >> l >> r;
		tree[node][0]=l;
		tree[node][1]=r;
		p[l] = p[r] = node;
	}
	inorder(1);
	while (1) {
		if (!visit[cur]) 
			visit[cur] = 1;
		if (tree[cur][0] != -1 && !visit[tree[cur][0]]) 
			cur = tree[cur][0];
		else if (tree[cur][1] != -1 && !visit[tree[cur][1]]) 
			cur = tree[cur][1];
		else if (cur == iend) break;
		else cur = p[cur];
		move++;
	}
	cout << move;
	return 0;
}