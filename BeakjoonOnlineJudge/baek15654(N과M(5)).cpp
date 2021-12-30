#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<int> v;
bool visit[9] = { 0 };
int n, m;
void back(string s, int d) {
	if (d == m) {
		s.pop_back();
		printf("%s\n", s.c_str());
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			back(s + to_string(v[i]) + " ", d + 1);
			visit[i] = 0;
		}
	}
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	back("", 0);
	return 0;
}