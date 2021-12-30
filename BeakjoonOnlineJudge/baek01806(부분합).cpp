#include <cstdio>
#include <climits>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int arr[100001] = { 0 };
long long sarr[100001] = { 0 };
int main() {
	int n, s; scanf("%d %d", &n, &s);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		if (i == 1) sarr[i] = arr[i];
		else sarr[i] = sarr[i - 1] + arr[i];
	}
	if (sarr[n] < s) {
		printf("0");
		return 0;
	}
	int l = 1, r = 1, len = INT_MAX;
	int sum = sarr[r] - sarr[l - 1];
	while(sum>=s||r<=n) {
		sum = sarr[r] - sarr[l - 1];
		if (sum < s) 
			r++;
		else if (sum == s) {
			len = min(len, r - l + 1);
			r++;
		}
		else {
			len = min(len, r - l + 1);
			l++;
		}
	}

	printf("%d", len);
	return 0;
}