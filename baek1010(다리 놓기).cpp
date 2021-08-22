//#include <iostream>
//using namespace std;
//long long c[30][30];
//int main() {
//	int t,n, m;
//	cin >> t;
//	for (int i = 1; i < 30; i++) {
//		c[i][1] = i;
//		c[i][i] = 1;
//	}
//		
//	for (int i = 3; i < 30; i++)
//		for (int j = 2; j < i; j++)
//			c[i][j] = c[i-1][j] + c[i - 1][j - 1];
//
//	for (int k = 0; k < t; k++) {
//		cin >> n >> m;
//		cout << c[m][n] << endl;
//	}
//
//	return 0;
//}