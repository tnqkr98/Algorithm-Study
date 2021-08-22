//#include <iostream>
//#include <set>
//using namespace std;
//int c = 1, num[10] = { 0 },mmin,mmax=0;
//bool isConti() {
//	for (int i = mmin; i < mmin+5; i++) 
//		if (num[i] != 1)
//			return false;
//	return true;
//}
//int find4() {
//	for (int i = 1; i < 10; i++) 
//		if (num[i] == 4)
//			return i;
//	return 0;
//}
//int find3() {
//	for (int i = 1; i < 10; i++)
//		if (num[i] == 3)
//			return i;
//	return 0;
//}
//int find2() {
//	for (int i = 1; i < 10; i++)
//		if (num[i] == 2)
//			return i;
//	return 0;
//}
//int find22() {
//	int res[2] = { 0 }, j = 0;
//	for (int i = 1; i < 10; i++)
//		if (num[i] == 2)
//			res[j++] = i;
//	if (res[0] == 0 || res[1] == 0)
//		return 0;
//	return res[1] * 10 + res[0];
//}
//int main() {
//	char a; int n;
//	cin >> a >> n;
//	num[n]++;
//	mmin = n;
//	mmax = n;
//	for (int i = 1; i < 5; i++) {
//		char b;
//		cin >> b >> n;
//		if (a == b)
//			c++;
//		num[n]++;
//		if (n < mmin) mmin = n;
//		if (n > mmax) mmax = n;
//	}
//	if (c == 5 && isConti())
//		cout << mmax + 900;
//	else if (find4())
//		cout << find4() + 800;
//	else if (find3() && find2())
//		cout << find3() * 10 + find2() + 700;
//	else if (c == 5)
//		cout << mmax + 600;
//	else if (isConti())
//		cout << mmax + 500;
//	else if (find3())
//		cout << find3() + 400;
//	else if (find22())
//		cout << find22() + 300;
//	else if (find2()) 
//		cout << find2() + 200;
//	else
//		cout << mmax + 100;
//	return 0;
//}