//// https://www.acmicpc.net/problem/1748
//// ���� 1748 �� : �� �̾� ���� 1
//// ���� �˰��� : Brute Force
//
//#include <iostream>
//using namespace std;
//int main() {
//	int n,i,ten=10,j=1;
//	long long r=0;
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		if (i - ten < 0)
//			r += j;
//		else if (i - ten == 0) {
//			j++;
//			r += j;
//			ten *= 10;
//		}
//	}
//	cout << r;
//
//	return 0;
//}