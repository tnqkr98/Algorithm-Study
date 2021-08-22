//#include <cstdio>
//#include <cmath>
//#include <vector>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	int n,min=100001,max=0,gmin=100001;
//	vector<int>v,vmin,vmax;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int t; scanf("%d", &t);
//		v.push_back(t);
//		if (min > t) {
//			min = t;
//			vmin.clear();
//			vmin.push_back(i);
//		}
//		else if(min == t)
//			vmin.push_back(i);
//		
//		if (max < t) {
//			max = t;
//			vmax.clear();
//			vmax.push_back(i);
//		}
//		else if (max == t)
//			vmax.push_back(i);
//	}
//
//	if (min == max) {
//		printf("1");
//		return 0;
//	}
//	if (vmax[0] > vmin[vmin.size() - 1])
//		gmin = vmax[0] - vmin[vmin.size() - 1]+1;
//	else if(vmin[0] > vmax[vmax.size() - 1])
//		gmin = vmin[0] - vmax[vmax.size() - 1]+1;
//	else if (vmax[0] < vmin[vmin.size() - 1]) {
//		for (int i = 0;; i++) {
//			if (vmax[i] < vmin[vmin.size() - 1])
//				gmin = vmin[vmin.size() - 1] - vmax[i] + 1;
//			else
//				break;
//		}
//	}
//	else if (vmin[0] < vmax[vmax.size() - 1]) {
//		for (int i = 0;; i++) {
//			if (vmin[i] < vmax[vmax.size() - 1])
//				gmin = vmax[vmax.size() - 1] - vmin[i] + 1;
//			else
//				break;
//		}
//	}
//
//	printf("%d", gmin);
//	return 0;
//}