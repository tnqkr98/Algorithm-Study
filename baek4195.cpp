//// https://www.acmicpc.net/problem/4195
//// Baekjoon No.4195 : 模备 匙飘况农
//// Algorithm : Union Find
//
//#include <map>
//#include <cstdio>
//#include <vector>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int> parent;
//int Find(int i) {
//	for (; parent[i] >= 0; i = parent[i]);
//	return i;
//}
//void Union(int i, int j) {
//	int a, b,tmp;
//	a = Find(i); b = Find(j);
//	tmp = parent[a] + parent[b];
//	if (a == b)
//		return;
//	else if (parent[a] > parent[b]) {
//		parent[a] = b;
//		parent[b] = tmp;
//	}
//	else {
//		parent[b] = a;
//		parent[a] = tmp;
//	}
//}
//int main() {
//	int t, f, i, j, number = 0, a, b;
//	map<string, int> m;
//	map<string, int>::iterator it;
//	char str1[21], str2[21];
//	scanf("%d", &t);
//	for (i = 0; i < t; i++) {
//		scanf("%d", &f);
//		for (j = 0; j < f; j++) {
//			scanf("%s %s",str1,str2);
//			if ((it = m.find(str1)) == m.end()) {
//				a = number++;
//				m.insert(make_pair(str1, a));
//				parent.push_back(-1);
//			}
//			else
//				a = it->second;
//			
//			if ((it = m.find(str2)) == m.end()) {
//				b = number++;
//				m.insert(make_pair(str2, b));
//				parent.push_back(-1);
//			}
//			else
//				b = it->second;
//			Union(a, b);
//			printf("%d\n",parent[Find(a)]*(-1));
//		}
//		m.clear();
//		parent.clear();
//		number = 0;
//	}
//	return 0;
//}
