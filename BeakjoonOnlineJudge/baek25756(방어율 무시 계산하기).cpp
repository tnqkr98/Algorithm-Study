#include <cstdio>
using namespace std;
int main() {
	int n; scanf("%d", &n);
	double v=0, a;
	while (n--) {
		scanf("%lf", &a);
		v = 1 - (1 - v) * (1 - a/100);
		printf("%.7lf\n", v * 100);
	}
	return 0;
}