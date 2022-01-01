#include <cstdio>

#pragma warning(disable:4996)
int main() {
	int n; scanf("%d", &n);
	
	while (n--) {
		double d; scanf("%lf", &d);
		printf("$%.2lf\n", d*0.8);


	}

	return 0;
}