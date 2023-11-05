//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n, m; cin >> n >> m;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++) {
//		v[i] = i + 1;
//	}
//	for (int i = 0; i < m; i++) {
//		int j, k; cin >> j >> k;
//		int c = v[j-1];
//		v[j - 1] = v[k - 1];
//		v[k - 1] = c;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << v[i] << " ";
//	}
//	return 0;
//}