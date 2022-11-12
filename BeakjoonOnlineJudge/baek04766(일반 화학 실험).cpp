#include <cstdio>
using namespace std;
int main() {
	double b,a=0;
	scanf("%lf", &b);
	while (1) {
		scanf("%lf", &a);
		if (a == 999) break;
		printf("%.2lf\n", a - b);
		b = a;
	}
	return 0;
}