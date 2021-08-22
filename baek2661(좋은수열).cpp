//#include <iostream>
//#include <string>
//using namespace std;
//int n;
//bool eend = false;
//void seq(string s,int d) {
//	for (int i = 1; i <= s.size() / 2; i++) 
//		if (s.substr(s.size() - i, i) == s.substr(s.size() - i * 2, i))
//			return;
//	if (eend)
//		return;
//	if (d == n){
//		eend = true;
//		cout << s;
//		return;
//	}
//	seq(s + "1", d + 1);
//	seq(s + "2", d + 1);
//	seq(s + "3", d + 1);
//}
//int main() {
//	string s="";
//	cin >> n;
//	seq(s,0);
//	return 0;
//}