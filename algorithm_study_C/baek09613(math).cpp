//// https://www.acmicpc.net/problem/9613
//// 백준 9613 번 : GCD sum
//// 관련 알고리즘 : Euclidean Alogorith
//
//#include <cstdio>
//#pragma warning(disable:4996)
//using namespace std;
//int gcd(int a, int b) { //Euclidean Alogorith
//	int tmp;
//	if (a < b) {  //  define a > b 
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while(1)
//		if (a%b == 0)
//			return b;
//		else {
//			tmp = a;
//			a = b;
//			b = tmp%b;
//		}
//}

//int main() {
//	int t, i, n, j, k, *arr;
//	unsigned long long sum = 0;
//	scanf("%d", &t);
//	for (i = 0; i < t; i++) {
//		scanf("%d", &n);
//		arr = new int[n];
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[j]);
//		for (j = 0; j < n - 1; j++)
//			for (k = j + 1; k < n; k++)
//				sum += gcd(arr[j], arr[k]);
//		printf("%lld\n", sum);
//		sum = 0;
//		delete[] arr;
//	}
//	return 0;
//}