// https://www.acmicpc.net/problem/15650

#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int n,m;
void pr(int l,int p, vector<int> v) {
	int conti = 0,i,j;
	if (l == m) {
		for (i = 0; i < v.size(); i++)
			printf("%d ", v[i]);
		printf("\n");
		return;
	}
	for (i = p+1; i <= n; i++) {
		for (j = 0; j < v.size(); j++) 
			if (i == v[j]) {
				conti = 1;
				break;
			}
		if (conti) {
			conti = 0;
			continue;
		}
		vector<int> v1(v);
		v1.push_back(i);
		pr(l + 1,i,v1);
	}
}
int main() {
	vector<int> v;
	scanf("%d %d", &n, &m);
	pr(0,0,v);
	return 0;
}