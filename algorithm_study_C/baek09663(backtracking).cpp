//// https://www.acmicpc.net/problem/9663
//// N-Queen Problem
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//int col[15]={0}, n, c = 0;
//vector<pair<int, int>> v;
//void nq(int row) {
//	int conti = 0;
//	if (row==n+1) {
//		c++;
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (col[i]) continue;
//		for (int j = 0; j < v.size(); j++) 
//			if (abs(v[j].first - row) == abs(v[j].second - i)) {
//				conti = 1;
//				break;
//			}
//		if (conti) {
//			conti = 0;
//			continue;
//		}
//		col[i] = 1;
//		v.push_back(make_pair(row, i));
//		nq(row + 1);
//		v.pop_back();
//		col[i] = 0;
//	}
//}
//
//int main() {
//	cin >> n;
//	nq(1);
//	cout << c;
//	return 0;
//}