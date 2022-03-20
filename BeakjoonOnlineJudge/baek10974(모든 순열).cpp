#include <cstdio>
#include <vector>
using namespace std;
bool visit[9];
int n;
void back(int d, vector<int> v) {
	if (d == n) {
		for (int i = 0; i < n; i++) printf("%d ", v[i]);
		printf("\n");
	}
	for (int i = 1; i <= n; i++) 
		if (!visit[i]) {
			visit[i] = 1;
			v.push_back(i);
			back(d + 1, v);
			v.pop_back();
			visit[i] = 0;
		}
}
int main() {
	scanf("%d", &n);
	back(0, vector<int>());
	return 0;
}