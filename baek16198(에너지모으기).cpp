//#include <iostream>
//#include <vector>
//using namespace std;
//int mmax = 0;
//void backtrack(int n,int sum,vector<int> v) {
//	if (n == 2) {
//		if (sum > mmax) mmax = sum;
//		return;
//	}
//	for (int i = 1; i < n - 1; i++) {
//		int data = v[i];
//		int mul = sum+ (v[i - 1] * v[i + 1]);
//		v.erase(v.begin() + i);
//		backtrack(n - 1, mul, v);
//		v.insert(v.begin() + i, data);
//	}
//}
//int main() {
//	vector<int>v;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int t; cin >> t;
//		v.push_back(t);
//	}
//	
//	for (int i = 1; i < n - 1; i++) {
//		int data = v[i],sum;
//		sum = v[i - 1] * v[i + 1];
//		v.erase(v.begin() + i);
//		backtrack(n - 1, sum, v);
//		v.insert(v.begin() + i, data);
//	}
//	cout << mmax;
//	return 0;
//}