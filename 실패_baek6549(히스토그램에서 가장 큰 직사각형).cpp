//#include <stdio.h>
//#include <vector>
//#include <memory.h>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int> v;
//int num,c=0;
//bool check[100001] = { 0 };
//unsigned long long mmax=0;
//void dnq(int n,int c_h,int c_w) {
//	if (check[n] && c_w == 1)
//		return;
//	if (c_h*c_w > mmax)
//		mmax = c_h * c_w;
//	if (n+1 >= num)
//		return;
//	if (v[n + 1] >= c_h) {
//		dnq(n + 1, v[n + 1], 1);
//		check[n + 1] = 1;
//		dnq(n + 1, c_h, c_w + 1);
//	}
//	else {
//		dnq(n + 1, v[n + 1], 1);
//		check[n + 1] = 1;
//	}
//	c++;
//}
//int main() {
//	int t;
//	do {
//		scanf("%d",&num);
//		if (num == 0)break;
//		for (int i = 0; i < num; i++) {
//			scanf("%d",&t);
//			v.push_back(t);
//		}
//		dnq(0, v[0], 1);
//		printf("%d\n", mmax);
//		mmax = 0;
//		v.clear();
//		memset(check, 0, sizeof(check));
//	} while (1);
//
//	printf("%d ȸ\n", c);
//	return 0;
//}