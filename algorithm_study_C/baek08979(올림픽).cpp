//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct gsb {
//	int c,g, s, b;
//};
//bool cmp(gsb &a, gsb &b) {
//	if (a.g > b.g)
//		return 1;
//	else if (a.g == b.g) {
//		if (a.s > b.s)
//			return 1;
//		else if (a.s == b.s) 
//			if (a.b > b.b)
//				return 1;
//	}
//	return 0;
//}
//int main() {
//	int n, k,i;
//	int kg, ks, kb;
//	vector<gsb> v;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		int c, g, s, b;
//		cin >> c >> g >> s >> b;
//		v.push_back({ c,g,s,b });
//		if (c == k) {
//			kg = g;
//			ks = s;
//			kb = b;
//		}
//	}
//	sort(v.begin(), v.end(),cmp);
//	for (i = 0; i < v.size(); i++) 
//		if (v[i].g == kg && v[i].b == kb && v[i].s == ks)
//			break;
//	cout << i + 1;
//	return 0;
//}