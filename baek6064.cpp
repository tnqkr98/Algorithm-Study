#include <cstdio>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)>(b)?(b):(a))
#pragma warning(disable:4996)
int gcd(int a, int b) {
	int tmp;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (1) 
		if (a%b == 0)
			return b;
		else {
			tmp = a;
			a = b;
			b = tmp % b;
		}
}
int lcm(int a, int b) {
	return a * b / gcd(MAX(a, b),MIN(a,b));
}
int main() {
	int t,i,j,m,n,x,y,xp,yp,l;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %d %d %d", &m, &n, &x, &y);
		l = lcm(m, n);
		xp = x; yp = y;
		while (1) {
			if (xp == yp) {
				printf("%d\n", xp);
				break;
			}
			else if (xp > yp)
				yp += n;
			else if (yp > xp)
				xp += m;

			if (xp > l || yp > l){
				printf("-1\n");
				break;
			}
		}
		
	}

	return 0;
}