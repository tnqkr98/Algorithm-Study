#include <cstdio>
#include <vector>
#include <stack>
#pragma warning(disable:4996)
using namespace std;
int f[1000001];
int main() {
	int n; scanf("%d", &n);
	vector<int> v,ans(n);
	for (int i = 0; i < n; i++) {
		int t; scanf("%d", &t);
		v.push_back(t);
		f[t]++;
	}
	stack<int> s;
	s.push(0);
	for (int i = 1; i < n; i++) {
		while(!s.empty()&&f[v[s.top()]] < f[v[i]]) {
			ans[s.top()] = v[i];
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()) {
		ans[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < n;i++) printf("%d ",ans[i]);
	return 0;
}