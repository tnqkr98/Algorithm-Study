//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int>v;
//int n, s, cnt=0;
//void back(int sum,int num,int len) {
//	if (num == n) {
//		if (sum == s && len>0)
//			cnt++;
//		return;
//	}
//	back(sum + v[num],num+1,len+1);
//	back(sum, num + 1,len);
//}
//int main() {
//	cin >> n >> s;
//	for (int i = 0; i < n; i++){
//		int t;
//		cin >> t;
//		v.push_back(t);
//	}
//	back(0, 0,0);
//	cout << cnt;
//	return 0;
//}