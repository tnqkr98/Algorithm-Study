//// https://www.acmicpc.net/problem/1697
//// 백준 1697 번 : 숨바꼭질
//// 관련 알고리즘 : BFS
//
//#include <iostream>
//#include <cmath>
//#include <queue>
//using namespace std;
//queue<pair<pair<int,int>,int>> q;
//int k, gmin,l=0;
//int check[200000] = { 0 };
//int main() {
//	int n;
//	int x, t, a;
//	cin >> n >> k;
//	if (n == k) {
//		cout << "0";
//		return 0;
//	}
//	q.push(make_pair(make_pair(n + 1,1), 1));
//	q.push(make_pair(make_pair(n - 1, 1), 2));
//	q.push(make_pair(make_pair(n * 2, 1), 3));
//	check[n] = -1;
//
//	while (!q.empty()) {
//		l++;
//		x = q.front().first.first;
//		t = q.front().first.second;
//		a = q.front().second;
//		q.pop();
//
//		if (x == k) {
//			gmin = t;
//			break;
//		}
//
//		if (check[x] == 0) {
//			check[x] = t;
//			if (x + 1 <= 200000 && a != 2)
//				q.push(make_pair(make_pair(x + 1, t + 1), 1));
//			if (x - 1 >= 0 && a != 1)
//				q.push(make_pair(make_pair(x - 1, t + 1), 2));
//			if (x * 2 <= 200000)
//				q.push(make_pair(make_pair(x * 2, t + 1), 3));
//		}
//		else if (!check[x]) {
//			if (x + 1 <= 200000 && a != 2 && (check[x + 1] > t + 1 || check[x + 1] == 0))
//				q.push(make_pair(make_pair(x + 1, t + 1), 1));
//			if (x - 1 >= 0 && a != 1 && (check[x - 1] > t + 1 || check[x - 1] == 0))
//				q.push(make_pair(make_pair(x - 1, t + 1), 2));
//			if (x * 2 <= 200000 && (check[x * 2] > t + 1 || check[x * 2] == 0))
//				q.push(make_pair(make_pair(x * 2, t + 1), 3));
//			check[x] = t;
//		}
//	}
//	cout << gmin;
//	return 0;
//}