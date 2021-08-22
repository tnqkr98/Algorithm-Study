//#include <iostream>
//#include <string>
//using namespace std;
//short a[10001], b[10001], c[10001], r[10001] = { 0 };
//bool aminus = false, bminus = false;
//string sa, sb;
//void pplus(bool isminus) {
//	int len = sa.size() > sb.size() ? sa.size() : sb.size();
//	int ap = sa.size() - 1-aminus;
//	int bp = sb.size() - 1-bminus;
//	for (int i = len; i >= 0; i--) {
//		if (ap > -1)
//			r[i] += a[ap--];
//		if (bp > -1)
//			r[i] += b[bp--];
//		r[i] += c[i];
//		c[i - 1] = r[i] / 10;
//		r[i] = r[i] % 10;
//	}
//	if (isminus) cout << "-";
//	for (int i = 0; i <= len; i++) {
//		if (i == 0 && r[i] == 0) continue;
//		cout << r[i];
//	}
//}
//void mminus() {
//	short *big, *small;
//	if (sa.size() < sb.size()) 
//		cout << "-";
//	else if (sa.size() == sb.size()) {
//		for (int i = 0; i < sa.size(); i++) {
//			if (sa.at(i) == sb.at(i)) continue;
//			else if (sa.at(i) > sb.at(i)) {
//				big = a;
//				small = b;
//				break;
//			}
//			else if (sa.at(i) < sb.at(i)) {
//				big = b;
//				small = a;
//				cout << "-";
//				break;
//			}
//		}
//	}
//
//
//}
//
//int main() {
//	int i = 0;
//	cin >> sa >> sb;
//	if (sa.at(0) == '-') {
//		i = 1;
//		aminus = true;
//	}
//	for (i; i < sa.size(); i++)
//		a[i] = sa.at(i)-'0';
//	if (sb.at(0) == '-') {
//		i = 1;
//		bminus = true;
//	}
//	else i = 0;
//	for (i; i < sb.size(); i++)
//		b[i] = sb.at(i) - '0';
//
//	if (aminus && bminus)
//		pplus(true);
//	else if (!aminus && !bminus)
//		pplus(false);
//	else
//		mminus();
//	return 0;
//}