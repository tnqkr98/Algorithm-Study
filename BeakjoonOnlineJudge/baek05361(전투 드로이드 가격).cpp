#include <cstdio>
using namespace std;
int main() {
	int n; scanf("%d", &n);
	while (n--) {
		int a, b, c, d, e; scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		printf("$%.2lf\n", a * 350.34 + b * 230.9 + c * 190.55 + d * 125.3 + e * 180.9);
	}
	return 0;
}