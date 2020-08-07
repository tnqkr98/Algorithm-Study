//#include <iostream>
//#define MIN(a,b) (((a)>(b))?(b):(a))
//using namespace std;
//int main() {
//	int n, k,cnt=0,res;
//	cin >> n >> k;
//	int left = 1, right = k,mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		for (int i = 1; i <= n; i++) 
//			cnt += MIN(mid / i, n);
//		if (cnt >= k) {
//			res = mid;
//			right = mid - 1;
//		}
//		else 
//			left = mid + 1;	
//		cnt = 0;
//	}
//	cout << res;
//	return 0;
//}