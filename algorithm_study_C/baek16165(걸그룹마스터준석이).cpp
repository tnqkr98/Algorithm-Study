//#include <iostream>
//#include <string>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	map<string, string> m1; // 이름, 그룹
//	map<string, vector<string>> m2; // 그룹, 이름들
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		int t;
//		string group;
//		cin >> group>>t;
//		m2.insert(make_pair(group, vector<string>()));
//		auto it = m2.find(group);
//		for (int j = 0; j < t; j++) {
//			string name;
//			cin >> name;
//			m1.insert(make_pair(name, group));
//			it->second.push_back(name);
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		int t; 
//		string name;
//		cin >> name >> t;
//		if (t == 1) 
//			cout << m1.find(name)->second << endl;
//		else {
//			vector<string> v = m2.find(name)->second;
//			sort(v.begin(), v.end());
//			for (int j = 0; j < v.size(); j++)
//				cout << v[j] << endl;
//		}
//	}
//	return 0;
//}