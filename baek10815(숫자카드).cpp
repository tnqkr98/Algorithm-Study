//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int> nv;
//int binarySearch(int n) {
//	int left=0, right=nv.size()-1, mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (nv[mid] == n) return 1;
//		else if (nv[mid] < n) 
//			left = mid + 1;
//		else 
//			right = mid-1;
//	}
//	return 0;
//}
//
//int main() {
//	int n, m;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int t;
//		scanf("%d", &t);
//		nv.push_back(t);
//	}
//	scanf("%d", &m);
//	sort(nv.begin(), nv.end());
//
//	for (int i = 0; i < m; i++) {
//		int t;
//		scanf("%d", &t);
//		printf("%d ", binarySearch(t));
//	}
//	return 0;
//}