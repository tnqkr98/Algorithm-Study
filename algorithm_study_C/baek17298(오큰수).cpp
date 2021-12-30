//#include <cstdio>
//#include <vector>
//#include <stack>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	int n;
//	scanf("%d", &n);
//	stack<int> s;
//	vector<int> v,ans(n);
//	s.push(0);
//	for (int i = 0; i < n; i++) {
//		int t; scanf("%d", &t);
//		v.push_back(t);
//	}
//	for (int i = 1; i < n; i++) {
//		while (!s.empty()&&v[i] > v[s.top()]) {
//			ans[s.top()] = v[i];
//			s.pop();
//		}
//		s.push(i);
//	}
//	while (!s.empty()) {
//		if (v[s.top()] < v[n - 1])
//			ans[s.top()] = v[n - 1];
//		else
//			ans[s.top()] = -1;
//		s.pop();
//	}
//	ans[n - 1] = -1;
//	for (int i = 0; i < n; i++)
//		printf("%d ", ans[i]);
//	return 0;
//}