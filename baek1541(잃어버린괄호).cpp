//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	int cur = 0,sum = 0,op=0; //0 -  1 +
//	bool minus = 0;
//	string s;
//	cin >> s;
//	if (s.find('+') < s.find('-')) {
//		sum += stoi(s.substr(0, s.find('+')));
//		cur = s.find('+')+1;
//		op = 1;
//	}
//	else{
//		sum += stoi(s.substr(0, s.find('-')));
//		cur = s.find('-')+1;
//		op = 0;
//		minus = 1;
//	}
//	
//	if (s.find('+') == -1 && s.find('-') == -1) {
//		sum = stoi(s);
//		cout << sum;
//		return 0;
//	}
//	
//	for (int i = cur+1; i < s.size(); i++) {
//		int n = 0;
//		if (s[i] == '+' || s[i] == '-')
//		{			
//			n = stoi(s.substr(cur, i - cur));
//			cur = i + 1;
//
//			if (!minus && op == 1)
//				sum += n;
//			else
//				sum -= n;
//
//			if (s[i] == '+') op = 1;
//			else op = 0;
//
//			if (s[i] == '-')
//				minus = 1;
//		}
//	}
//	if(minus)
//		sum -= stoi(s.substr(cur, s.size() - cur));
//	else
//		sum += stoi(s.substr(cur, s.size() - cur));
//	cout << sum;
//	return 0;
//}