//// https://www.acmicpc.net/problem/2981
//// 백준 2981번 : 검문
//// 관련알고리즘 : Euclid , Divider, Math
//
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//int gcd(int a, int b) {
//	int tmp;
//	if (a < b) {
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (1) {
//		if (a%b == 0)
//			return b;
//		else {
//			tmp = a;
//			a = b;
//			b = tmp % b;
//		}
//	}
//}
//int main() {
//	int n, i, j, a, b, g;
//	vector<int> d;
//	scanf("%d", &n);
//	scanf("%d %d", &a,&b);
//	g = abs(a - b);
//	for (i = 0; i < n-2; i++) {
//		scanf("%d", &b);
//		if(abs(a-b)%g !=0)
//			g = gcd(abs(a - b), g);
//	}
//	
//	for (i = 1; i*i < g; i++) {
//		if (g%i == 0) {
//			d.push_back(i);
//			d.push_back(g/i);
//		}	
//	}
//	if (i*i == g)
//		d.push_back(i);
//
//	sort(d.begin(), d.end());
//	for (i = 1; i < d.size();i++) 
//		printf("%d ", d[i]);
//	return 0;
//}