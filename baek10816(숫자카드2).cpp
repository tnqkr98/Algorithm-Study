//#include <cstdio>
//#include <map>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	map<int, int> mp; // key, count
//	int n, m, t,i;
//	map<int,int>::iterator tmp;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &t);
//		tmp = mp.find(t);
//		if (tmp != mp.end())
//			tmp->second++;
//		else
//			mp.insert(make_pair(t, 1));
//	}
//	scanf("%d", &m);
//	for (i = 0; i < m; i++) {
//		scanf("%d", &t);
//		tmp = mp.find(t);
//		if (tmp != mp.end())
//			printf("%d ", tmp->second);
//		else
//			printf("0 ");
//	}
//
//	return 0;
//}