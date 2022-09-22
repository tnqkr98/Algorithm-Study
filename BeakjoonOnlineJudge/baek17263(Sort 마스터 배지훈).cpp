#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n; scanf("%d", &n);
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a; scanf("%d", &a);
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	printf("%d",v[v.size() - 1]);
	return 0;
}