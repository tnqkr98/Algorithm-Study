//#include <iostream>
//#include <stack>
//#include <memory.h>
//using namespace std;
//int num,check=0,mmax =0;
//stack<int> s;
//void search(int n,int dir,short arr[][21]) {
//	int i, j,k,l;
//	short narr[21][21];
//	memcpy(narr, arr, sizeof(narr));
//	check = 0;
//	switch (dir)  {
//	case 0:  //up
//		for (i = 0; i < num; i++) {
//			for (j = 0; j < num; j++) {
//				if (!narr[j][i]) continue;
//				if (!s.empty() && s.top() == narr[j][i] && !check) {
//					s.pop();
//					s.push(narr[j][i] * 2);
//					check = 1;
//				}
//				else {
//					s.push(narr[j][i]);
//					check = 0;
//				}
//			}
//			for (j = 0; j < num; j++)
//				if (!s.empty()) {
//					narr[j][i] = s.top();
//					if (s.top() > mmax)
//						mmax = s.top();
//					s.pop();
//				}
//				else
//					narr[j][i] = 0;
//		}
//		break;
//	case 1:  //down
//		for (i = 0; i < num; i++) {
//			for (j = num; j >= 0; j--) {
//				if (!narr[j][j]) continue;
//				if (!s.empty() && s.top() == narr[j][i] && !check) {
//					s.pop();
//					s.push(narr[j][i] * 2);
//					check = 1;
//				}
//				else {
//					s.push(narr[j][i]);
//					check = 0;
//				}
//			}
//			for (j = num; j >= 0; j--)
//				if (!s.empty()) {
//					narr[j][i] = s.top();
//					if (s.top() > mmax)
//						mmax = s.top();
//					s.pop();
//				}
//				else
//					narr[j][i] = 0;
//		}
//		break;
//	case 2:  //left
//		for (i = 0; i < num; i++) {
//			for (j = 0; j < num; j++) {
//				if (!narr[i][j]) continue;
//				if (!s.empty() && s.top() == narr[i][j] && !check) {
//					s.pop();
//					s.push(narr[i][j] * 2);
//					check = 1;
//				}
//				else {
//					s.push(narr[i][j]);
//					check = 0;
//				}
//			}
//			for (j = 0; j < num; j++)
//				if (!s.empty()) {
//					narr[i][j] = s.top();
//					if (s.top() > mmax)
//						mmax = s.top();
//					s.pop();
//				}
//				else
//					narr[i][j] = 0;
//		}
//		break;
//	case 3:  //right
//		for (i = 0; i < num; i++) {
//			for (j = num; j >= 0; j--) {
//				if (!narr[i][j]) continue;
//				if (!s.empty() && s.top() == narr[i][j] && !check) {
//					s.pop();
//					s.push(narr[i][j] * 2);
//					check = 1;
//				}
//				else {
//					s.push(narr[i][j]);
//					check = 0;
//				}
//			}
//			for (j = num; j >= 0; j--)
//				if (!s.empty()) {
//					narr[i][j] = s.top();
//					if (s.top() > mmax)
//						mmax = s.top();
//					s.pop();
//				}
//				else
//					narr[i][j] = 0;
//		}
//		break;
//	}
//	
//
//	if (n + 1 == 6)
//		return;
//	search(n+1, 0, narr);
//	search(n+1, 1, narr);
//	search(n+1, 2, narr);
//	search(n+1, 3, narr);
//}
//int main() {
//	int i,j;
//	short arr[21][21];
//	cin >> num;
//	for (i = 0; i < num; i++)
//		for (j = 0; j < num; j++)
//			cin >> arr[i][j];
//	
//	search(1, 0,arr);
//	search(1, 1,arr);
//	search(1, 2,arr);
//	search(1, 3,arr);
//	cout << mmax;
//	return 0;
//}