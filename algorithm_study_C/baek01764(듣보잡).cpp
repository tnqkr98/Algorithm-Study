//#include <iostream>
//#include <set>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int n, m;
//	set<string> a, b;
//	vector<string> v;
//	string t;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> t;
//		a.insert(t);
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> t;
//		b.insert(t);
//	}
//	for (auto it = a.begin(); it != a.end(); it++)
//		if (b.find(*it) != b.end())
//			v.push_back(*it);
//	sort(v.begin(), v.end());
//	cout << v.size()<<endl;
//	for (auto it = v.begin(); it != v.end(); it++) 
//		cout << *it << endl;
//	return 0;
//}