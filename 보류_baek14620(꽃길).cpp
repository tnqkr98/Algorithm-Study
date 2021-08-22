//#include<iostream>
//#include<algorithm>
//#include <vector>
//#include <memory.h>
//using namespace std;
//int m[11][11],siz;
//int dx[5] = { 0,0,1,0,-1 };
//int dy[5] = { 0,1,0,-1,0 };
//struct rcg {
//	int r, c, g;
//};
//bool cmp(rcg&a, rcg&b) {
//	return a.g < b.g;
//}
//void func(bool chk[][11],int num,int flo,int G) {
//	bool ok = true;
//
//	if (flo == 3) {
//
//	}
//
//	if (ok)
//	{
//
//	}
//}
//vector<rcg> v;
//
//int main() {
//	int n;
//	bool chk[11][11] = { 0 };
//	cin >> n;
//	for(int i=0;i<n;i++)
//		for (int j = 0; j < n; j++) {
//			int t; cin >> t;
//			m[i][j] = t;
//		}
//	for (int i = 1; i < n - 1; i++) 
//		for (int j = 1; j < n - 1; j++) {
//			int sum = m[i][j];
//			for (int k = 0; k < 5; k++) 
//				sum += m[i + dx[k]][j + dy[k]];
//			v.push_back({ i,j,sum });
//		}
//	siz = v.size();
//	for(int i=0;i<v.size();i++)
//		func(chk, i,0,0);
//	return 0;
//}