#include <cstdio>
#pragma warning(disable:4996)
int main() {
	char c; int n[3];
	scanf("%d %c %d %c %d", &n[0], &c, &n[1], &c, &n[2]);
	if (n[0] + n[1] == n[2]) printf("YES");
	else printf("NO");
	return 0;
}