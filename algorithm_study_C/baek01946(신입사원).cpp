//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	cin.sync_with_stdio(false);
//	int t, n;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		cin >> n;
//		vector<pair<int, int>>v;
//		for (int j = 0; j < n; j++) {
//			int a, b;
//			cin >> a >> b;
//			v.push_back(make_pair(a, b));
//		}
//		sort(v.begin(), v.end());
//		int tar = v[0].second,cnt=1;
//		for (int j = 1; j < n; j++) {
//			if (tar > v[j].second) {
//				cnt++;
//				tar = v[j].second;
//			}
//		}
//		cout << cnt<<endl;
//	}
//	return 0;
//}