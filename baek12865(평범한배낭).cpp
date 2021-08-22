//#include <iostream>
//#include <vector>
//#define MAX(a,b) (((a)>(b))?(a):(b))
//using namespace std;
//typedef struct {
//	int w, v;
//} bag;
//int v[101][100001] = { 0 };
//int main() {
//	int n, k,t1,t2;
//	vector<bag> st;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> t1 >> t2;
//		st.push_back({ t1,t2 });
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int W = 0; W <= k; W++) {
//			if (st[i-1].w > W) v[i][W] = v[i - 1][W];
//			else 
//				v[i][W] = MAX(v[i - 1][W], v[i - 1][W - st[i-1].w] + st[i-1].v);
//		}
//	}
//	cout << v[n][k];
//	return 0;
//}