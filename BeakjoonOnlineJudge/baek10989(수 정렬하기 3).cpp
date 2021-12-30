#include <cstdio>
using namespace std;
int main() {
	int arr[10001] = { 0 }, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		arr[t]++;
	}
	for (int i = 1; i < 10001; i++) {
		if (arr[i] == 0) continue;
		else
			for (int j = arr[i]; j > 0; j--)
				printf("%d\n", i);
	}
	return 0;
}