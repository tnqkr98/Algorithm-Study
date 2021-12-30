//// https://www.acmicpc.net/problem/13458
//// 백준 13458번 : 시험 감독
//// 관련 알고리즘 : math
//
//#include <cstdio>
//#pragma warning(disable:4996)
//int main() {
//	int n,*a,b,c,i;
//	scanf("%d", &n);
//	unsigned long long sum = 0;
//	a = new int[n];
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	scanf("%d %d", &b, &c);
//
//	for (i = 0; i < n; i++) {
//		a[i] -= b; sum += 1;
//		if (a[i] > 0) {
//			if (a[i] % c != 0)
//				sum += a[i] / c + 1;
//			else
//				sum += a[i] / c;
//		}
//	}
//	printf("%lld", sum);
//	return 0;
//}