//// https://www.acmicpc.net/problem/2225
//// Beakjoon 2225번 : 합분해
//// Algorithm : Dynamic Programming
//
//#include <iostream>
//using namespace std;
//int d[201][201];
//int main() {
//	int n, k,i,j;
//	cin >> n >> k;
//	for (i = 1; i <= 200; i++) {
//		d[i][1] = 1;
//		d[1][i] = i;
//	}
//	for (i = 2; i <= n; i++) 
//		for (j = 2; j <= k; j++) {
//			d[i][j] = d[i][j - 1] + d[i - 1][j];
//			d[i][j] %= 1000000000;
//		}
//	cout << d[n][k];
//	return 0;
//}