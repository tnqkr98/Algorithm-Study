//#include <cstdio>
//#include <vector>
//#include <limits.h>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	int n, m, b,newb,t;
//	int min = 501, max = -1, time = 0;
//	int min_time=INT_MAX, max_height=0;
//	vector<int> v;
//	scanf("%d %d %d", &n, &m, &b);
//	for (int i = 0; i < m*n; i++) {
//		scanf("%d", &t);
//		if (t > max) max=t;
//		if (t < min) min=t;
//		v.push_back(t);
//	}
//	newb = b;
//	for (int i = min; i <= max; i++) {
//		for (int j = 0; j < v.size(); j++) {
//			if (v[j] > i) {
//				newb +=(v[j]-i);
//				time += (v[j] - i) * 2;
//			}
//			else if (v[j] < i) {
//				newb -= (i - v[j]);
//				time += (i - v[j]);
//			}
//		}
//		if (newb >= 0) 
//			if (time <= min_time) {
//				min_time = time;
//				max_height = i;
//			}
//		newb = b;
//		time = 0;
//	}
//	printf("%d %d", min_time, max_height);
//	return 0;
//}