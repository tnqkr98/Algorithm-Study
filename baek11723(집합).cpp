//#include <cstdio>
//#include <string.h>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	int m, n, s[21] = { 0 };
//	char c[20];
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++) {
//		scanf("%s", c);
//		if (strcmp(c,"all") == 0) {
//			for (int j = 1; j <= 20; j++)
//				s[j]=1;
//			continue;
//		}
//		else if (strcmp(c,"empty") == 0) {
//			for (int j = 1; j <= 20; j++)
//				s[j] = 0;
//			continue;
//		}
//		scanf("%d", &n);
//		if (strcmp(c, "add")==0)
//			s[n]++;
//		else if (strcmp(c,"check") == 0) {
//			if (s[n] > 0)
//				printf("1\n");
//			else
//				printf("0\n");
//		}
//		else if (strcmp(c,"remove") == 0 && s[n] > 0)
//			s[n] = 0;
//		else if (strcmp(c,"toggle") == 0) {
//			if (s[n]==0)
//				s[n]++;
//			else
//				s[n]=0;
//		}
//	}
//	return 0;
//}