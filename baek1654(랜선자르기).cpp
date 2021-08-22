//#include <cstdio>
//#include <vector>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	long k, n,t,res=0,lan=0;
//	long left=0, mid, right=0;
//	vector<long> v;
//	scanf("%d %d", &k, &n);
//	for (int i = 0; i < k; i++) {
//		scanf("%d", &t);
//		v.push_back(t);
//		if (t > right) right = t;
//	}
//	mid = (left + right) / 2;
//	while (left<=right){
//		res = 0;
//		mid = (left + right) / 2;
//		if (mid == 0) mid = 1;
//		for (int i = 0; i < k; i++) 
//			res += v[i] / mid;
//		if (res >= n) {
//			left = mid+1;
//			if (mid > lan)
//				lan = mid;
//		}
//		else 
//			right = mid-1;
//	}
//	printf("%d\n", lan);
//	return 0;
//}