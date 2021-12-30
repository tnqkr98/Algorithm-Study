//// https://www.acmicpc.net/problem/15652
//
//#include <cstdio>
//#include <vector>
//#pragma warning(disable:4996)
//using namespace std;
//int n, m;
//void pr(int l,int p, vector<int> v) {
//	int conti = 0, i, j;
//	if (l == m) {
//		for (i = 0; i < v.size(); i++)
//			printf("%d ", v[i]);
//		printf("\n");
//		return;
//	}
//	for (i = p; i <= n; i++) {
//		vector<int> v1(v);
//		v1.push_back(i);
//		pr(l + 1,i, v1);
//	}
//}
//int main() {
//	vector<int> v;
//	scanf("%d %d", &n, &m);
//	pr(0,1,v);
//	return 0;
//}