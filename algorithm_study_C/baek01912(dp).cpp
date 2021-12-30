//// https://www.acmicpc.net/problem/1912
//// BaekJoon No.1912 : ¿¬¼ÓÇÕ
//// Algorithm : Dynamic Programming
//
//#include <cstdio>
//#define MAX(a,b) (((a)>(b))?(a):(b))
//#pragma warning(disable:4996)
//int d[100001][2]={0};
//short arr[100001];
//
//int main() {
//	int n, i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	d[0][0] = arr[0];
//	d[0][1] = arr[0];
//	for (i = 1; i < n; i++) {
//		d[i][1] = d[i - 1][1] + arr[i];
//		if (d[i][1] < 0)
//			d[i][1] = arr[i];
//		else if (d[i - 1][1] < 0 && arr[i]>0)
//			d[i][1] = arr[i];
//		d[i][0] = MAX(d[i - 1][0], d[i][1]);
//	}
//	printf("%d", d[n - 1][0]);
//	return 0;
//}