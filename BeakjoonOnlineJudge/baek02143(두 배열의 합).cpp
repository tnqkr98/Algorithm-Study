#include <cstdio>
#include <unordered_map>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int a[1001], b[1001],n,m;
int main() {
	long long cnt = 0;
	int t; scanf("%d", &t);
	scanf("%d", &n);
	vector<long long> asub;
	for (int i = 1; i <= n; i++) 
		scanf("%d", &a[i]);
	
	for (int i = 1; i <= n; i++) {
		int num = a[i];
		asub.push_back(num);
		for (int j = i + 1; j <= n; j++) {
			num += a[j];
			asub.push_back(num);
		}
	}
	
	scanf("%d", &m);
	unordered_map<long long, long long> bsub;
	for (int i = 1; i <= m; i++) 
		scanf("%d", &b[i]);

	for (int i = 1; i <= m; i++) {
		int num = b[i];
		bsub[num]++;
		for (int j = i + 1; j <= m; j++) {
			num += b[j];
			bsub[num]++;
		}
	} 

	for (int i = 0; i<asub.size(); i++) 
		cnt += bsub[t-asub[i]];
	
	printf("%lld", cnt);
	return 0;
}