//// https://www.acmicpc.net/problem/12100
//// 백준 12100번 : 2048(Easy)
//// 관련 알고리즘 : Brute Force, DFS
//
//
//#include <iostream>
//#include <deque>
//#include <memory.h>
//using namespace std;
//deque<int> *dq;
//int n, *schk, mmax = 0;
//void dfs(int c, unsigned short ar[][20]) {
//	unsigned short narr[20][20];
//	int i, j;
//	if (c == 6)
//		return;
//	memcpy(narr, ar, sizeof(narr));
//	memset(schk, 0, sizeof(int)*n);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++) {
//			if (!narr[j][i]) continue;
//			else if (dq[i].empty())
//				dq[i].push_back(narr[j][i]);
//			else if (dq[i].back() == narr[j][i] && !schk[i]) {
//				dq[i].pop_back();
//				dq[i].push_back(narr[j][i] * 2);
//				schk[i] = 1;
//			}
//			else {
//				dq[i].push_back(narr[j][i]);
//				schk[i] = 0;
//			}
//		}
//	memset(narr, 0, sizeof(narr));
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++) {
//			if (!dq[i].empty()) {
//				narr[j][i] = dq[i].front();
//				if (dq[i].front() > mmax)
//					mmax = dq[i].front();
//				dq[i].pop_front();
//			}
//		}
//	dfs(c + 1, narr);
//	memcpy(narr, ar, sizeof(narr));
//	memset(schk, 0, sizeof(int)*n);
//	for (i = 0; i < n; i++)
//		for (j = n - 1; j >= 0; j--) {
//			if (!narr[j][i]) continue;
//			else if (dq[i].empty())
//				dq[i].push_back(narr[j][i]);
//			else if (dq[i].back() == narr[j][i] && !schk[i]) {
//				dq[i].pop_back();
//				dq[i].push_back(narr[j][i] * 2);
//				schk[i] = 1;
//			}
//			else {
//				dq[i].push_back(narr[j][i]);
//				schk[i] = 0;
//			}
//		}
//	memset(narr, 0, sizeof(narr));
//	for (i = 0; i < n; i++)
//		for (j = n - 1; j >= 0; j--) {
//			if (!dq[i].empty()) {
//				narr[j][i] = dq[i].front();
//				if (dq[i].front() > mmax)
//					mmax = dq[i].front();
//				dq[i].pop_front();
//			}
//		}
//	dfs(c + 1, narr);
//	memcpy(narr, ar, sizeof(narr));
//	memset(schk, 0, sizeof(int)*n);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++) {
//			if (!narr[i][j]) continue;
//			else if (dq[i].empty())
//				dq[i].push_back(narr[i][j]);
//			else if (dq[i].back() == narr[i][j] && !schk[i]) {
//				dq[i].pop_back();
//				dq[i].push_back(narr[i][j] * 2);
//				schk[i] = 1;
//			}
//			else {
//				dq[i].push_back(narr[i][j]);
//				schk[i] = 0;
//			}
//		}
//	memset(narr, 0, sizeof(narr));
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++) {
//			if (!dq[i].empty()) {
//				narr[i][j] = dq[i].front();
//				if (dq[i].front() > mmax)
//					mmax = dq[i].front();
//				dq[i].pop_front();
//			}
//		}
//	dfs(c + 1, narr);
//	memcpy(narr, ar, sizeof(narr));
//	memset(schk, 0, sizeof(int)*n);
//	for (i = 0; i < n; i++)
//		for (j = n - 1; j >= 0; j--) {
//			if (!narr[i][j]) continue;
//			else if (dq[i].empty())
//				dq[i].push_back(narr[i][j]);
//			else if (dq[i].back() == narr[i][j] && !schk[i]) {
//				dq[i].pop_back();
//				dq[i].push_back(narr[i][j] * 2);
//				schk[i] = 1;
//			}
//			else {
//				dq[i].push_back(narr[i][j]);
//				schk[i] = 0;
//			}
//		}
//	memset(narr, 0, sizeof(narr));
//	for (i = 0; i < n; i++)
//		for (j = n - 1; j >= 0; j--) {
//			if (!dq[i].empty()) {
//				narr[i][j] = dq[i].front();
//				if (dq[i].front() > mmax)
//					mmax = dq[i].front();
//				dq[i].pop_front();
//			}
//		}
//	dfs(c + 1, narr);
//}
//int main() {
//	int i, j;
//	unsigned short arr[20][20] = { 0 };
//	cin >> n;
//	dq = new deque<int>[n];
//	schk = new int[n];
//	memset(schk, 0, sizeof(int)*n);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			cin >> arr[i][j];
//	dfs(1, arr);
//	cout << mmax;
//	return 0;
//}