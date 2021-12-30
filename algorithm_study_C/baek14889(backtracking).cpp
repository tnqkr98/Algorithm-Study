//// https://www.acmicpc.net/problem/14889
//// 백준 14889번 스타트와 링크
//// 관련 알고리즘 : Backtracking, Brute force
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//int s[20][20],check[20]={0},n;
//vector<int> v;
//void back(int d,int p,int sum) {
//	int save = sum,i,j;
//	if (d == n / 2) {
//		int link = 0;
//		for (i = 0; i < n; i++)
//			for (j = 0; j < n; j++)
//				if (!check[i] && !check[j])
//					link += s[i][j];
//		v.push_back(abs(link - sum));
//		return;
//	}
//
//	for (i = p+1; i < n; i++) {
//		check[i] = 1;
//		for (j = 0; j < n; j++) 
//			if(check[j])
//				sum += s[i][j] + s[j][i];
//		back(d + 1, i, sum);
//		check[i] = 0;
//		sum = save;
//	}
//}
//int main() {
//	int i,j;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			cin >> s[i][j];
//	check[0] = 1;
//	back(1,0,0);
//	cout << *min_element(v.begin(), v.end());
//	return 0;
//}