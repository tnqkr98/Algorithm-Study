//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//string toCamel(string s, int n) {
//	string res="";
//	if (n == 2) {
//		for (int i = 0;i<s.size();i++) {
//			if (s[i] != '_')
//				res += s[i];
//			else {
//				res += toupper(s[i + 1]);
//				i++;
//			}
//		}
//	}
//	else {
//		res += tolower(s[0]);
//		res += s.substr(1);
//	}
//	return res;
//}
//
//string toSnake(string s, int n) {
//	string res = "";
//	res += tolower(s[0]);
//	for (int i = 1; i < s.size(); i++) {
//		if (s[i] >= 'a' && s[i] <='z')
//			res += tolower(s[i]);
//		else {
//			res += "_";
//			res += tolower(s[i]);
//		}
//	}
//	return res;
//}
//
//string toPascal(string s, int n) {
//	string res = "";
//	if (n == 1) {
//		res += toupper(s[0]);
//		res += s.substr(1);
//	}
//	else {
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] != '_')
//				res += s[i];
//			else {
//				res += toupper(s[i + 1]);
//				i++;
//			}
//		}
//		res[0] = toupper(s[0]);
//	}
//	return res;
//}
//int main() {
//	int n; cin >> n;
//	string s; cin >> s;
//	if (n == 1) cout << s << endl;
//	else cout << toCamel(s, n) <<endl;
//	if (n == 2) cout << s << endl;
//	else cout << toSnake(s, n) << endl;
//	if (n == 3) cout << s << endl;
//	else cout << toPascal(s, n) << endl;
//	return 0;
//}