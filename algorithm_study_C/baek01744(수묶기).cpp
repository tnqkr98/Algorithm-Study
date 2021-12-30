//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	cin.sync_with_stdio(0);
//	int n, zero = 0;
//	vector<int> v1,v2;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int t; cin >> t;
//		if (t > 0)
//			v1.push_back(t);
//		else if (t < 0)
//			v2.push_back(t);
//		else
//			zero++;
//	}
//	sort(v1.begin(), v1.end(),greater<int>());
//	sort(v2.begin(), v2.end());
//	int sum = 0, i,j;
//	for (i = 0; i < v1.size();) {
//		if (i + 1 < v1.size()) {
//			if (v1[i] != 1 && v1[i + 1] != 1)
//				sum += v1[i] * v1[i + 1];
//			else
//				sum += v1[i] + v1[i + 1];
//			i += 2;
//		}
//		else
//			break;
//	}
//	
//	if (i == v1.size() - 1)
//		sum += v1[i];
//
//	for (j = 0; j < v2.size();){
//		if (j + 1 < v2.size()) {
//			sum += v2[j] * v2[j + 1];
//			j += 2;
//		}
//		else
//			break;
//	}
//	if (j == v2.size() - 1 && zero ==0)
//		sum += v2[j];
//	
//	cout << sum;
//	return 0;
//}