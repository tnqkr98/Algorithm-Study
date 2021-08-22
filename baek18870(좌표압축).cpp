//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> iv;
//int bsearch(int t) {
//	int left = 0, right = iv.size() - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (iv[mid] == t)
//			return mid;
//		else if (iv[mid] < t)
//			left = mid+1;
//		else if (iv[mid] > t)
//			right = mid;
//	}
//}
//int main() {
//	int n;
//	vector<int>v1,v2;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int t; cin >> t;
//		v1.push_back(t);
//		v2.push_back(t);
//	}
//	sort(v2.begin(), v2.end());
//	iv.push_back(v2[0]);
//	for (int i = 1; i < v2.size(); i++) 
//		if (v2[i] != v2[i - 1])
//			iv.push_back(v2[i]);
//	for (int i = 0; i < v1.size(); i++)
//		cout << bsearch(v1[i]) << " ";
//	return 0;
//}