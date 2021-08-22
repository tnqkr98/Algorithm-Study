//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//	int idx=0,sum=0;
//	bool cal = false;
//	vector<int> num;
//	vector<char> op;
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == '+' || s[i] == '-') {
//			num.push_back(stoi(s.substr(idx, i-idx)));
//			op.push_back(s[i]);
//			idx = i + 1;
//		}
//	}
//	num.push_back(stoi(s.substr(idx, s.size() - idx)));
//	int i = 0;
//	for (int i = 0; i < op.size(); i++) {
//		if (op[i] == '-')
//			cal = true;
//		sum += num[i];
//	}
//
//	return 0;
//}