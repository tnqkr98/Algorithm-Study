//#include <iostream>
//#include <string>
//using namespace std;
//short a[10001], b[10001], c[10001], r[10001] = { 0 };
//int main() {
//	string sa, sb;
//	cin >> sa >> sb;
//	for (int i = 0; i < sa.size(); i++)
//		a[i] = sa.at(i)-'0';
//	for (int i = 0; i < sb.size(); i++)
//		b[i] = sb.at(i) - '0';
//	int len = sa.size() > sb.size() ? sa.size() : sb.size();
//	int ap = sa.size() - 1;
//	int bp = sb.size() - 1;
//	for (int i = len; i >= 0; i--) {
//		if (ap > -1) 
//			r[i] += a[ap--];
//		if (bp > -1) 
//			r[i] += b[bp--];
//		r[i] += c[i];
//		c[i-1] = r[i] / 10;
//		r[i] = r[i] % 10;
//	}
//	for (int i = 0; i <= len; i++) {
//		if (i == 0 && r[i] == 0) continue;
//		cout << r[i];
//	}
//	return 0;
//}