//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <string>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int> v;
//bool visit[9] = { 0 };
//bool num[10001];
//int cnt[10001] = { 0 };
//int n, m;
//void back(string s, int d) {
//	if (d == m) {
//		s.pop_back();
//		printf("%s\n", s.c_str());
//		return;
//	}
//	for (int i = 0; i < v.size(); i++) {
//		if (cnt[v[i]] >0) {
//			cnt[v[i]]--;
//			back(s + to_string(v[i]) + " ", d + 1);
//			cnt[v[i]]++;
//		}
//	}
//}
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		int t;
//		scanf("%d", &t);
//		if (!num[t]) {
//			v.push_back(t);
//			num[t] = 1;
//		}
//		cnt[t]++;
//	}
//	sort(v.begin(), v.end());
//	back("", 0);
//	return 0;
//}