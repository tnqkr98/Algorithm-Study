//#include <iostream>
//#include <deque>
//#include <memory.h>
//using namespace std;
//deque<int> *dq;
//int n, *schk, mmax = 0;
//void rotate(int ar[][20]) {
//	int tmp[20][20],i,j;
//	memcpy(tmp, ar, sizeof(tmp));
//	for(i=0;i<n;i++)
//		for (j = 0; j < n; j++) 
//			ar[j][n - i-1] = tmp[i][j];
//}
//void dfs(int c, int ar[][20]) {
//	int narr[20][20], i, j;
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
//	rotate(narr);
//	dfs(c + 1, narr);
//	rotate(narr);
//	dfs(c + 1, narr);
//	rotate(narr);
//	dfs(c + 1, narr);
//}
//int main() {
//	int i,j;
//	int arr[20][20] = {0};
//	cin >> n;
//	dq = new deque<int>[n];
//	schk = new int[n];
//	memset(schk, 0, sizeof(int)*n);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			cin >> arr[i][j];
//	dfs(1,arr);
//
//	rotate(arr);
//	dfs(1, arr);
//
//	rotate(arr);
//	dfs(1, arr);
//
//	rotate(arr);
//	dfs(1, arr);
//
//	cout << mmax;
//	return 0;
//}