//// https://www.acmicpc.net/problem/11051
//// 백준 11051번 - 이항 계수 2 (binomial coefficient)
//// 관련 알고리즘 : Dynamic Programming
//
//#include <iostream>
//using namespace std;
//unsigned short c[1001][1001];
//int main() {
//	int n, k,i,j;
//	cin >> n >> k;
//	for (i = 1; i <=n; i++) {
//		for (j = 0; j <= k; j++) {
//			if (j == 0)
//				c[i][j] = 1;
//			else if (j == 1)
//				c[i][j] = i%10007;
//			else if (i == j)
//				c[i][j] = 1;
//			else
//				c[i][j] = (c[i - 1][j] + c[i - 1][j - 1])%10007;
//		}
//	}
//
//	cout << c[n][k];
//	return 0;
//}