//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	long long n,k,t=1;
//	long long left, right, mid, res=0,idx=0;
//	cin>>n;
//	cin>>k;
//	vector<long long> v;
//	vector<long long> target;
//	v.push_back(1);
//	for (int i = 1; i < n * 2 - 1; i++) {
//		if (i < n) 
//			v.push_back(v[i - 1] + (++t));
//		else
//			v.push_back(v[i - 1] + (--t));
//	}
//	
//	left = 0;
//	right = v.size() - 1;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (v[mid] > k)
//			right = mid - 1;
//		else if (v[mid] == k) {
//			break;
//		}
//		else 
//			left = mid + 1;
//	}
//	if (v[mid] < k) mid+=1;
//	if (mid != 0)
//		idx = k - v[mid - 1] - 1;
//	else
//		idx = 0;
//	mid += 1;
//	cout << "mid :" << mid << endl;
//	cout << "idx :" << idx <<endl;
//	if (mid > n) {
//		long long j = n;
//		for (long long i = 1 + (mid - n); i <= n; i++)
//			target.push_back(i*(j--));
//	}else{
//		for (long long i = 1; i <= mid; i++) 
//			target.push_back(i*(mid + 1 - i));	
//	}
//	sort(target.begin(), target.end());
//	cout << target[idx];
//	return 0;
//}