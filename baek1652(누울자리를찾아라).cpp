//#include <iostream>
//#include <string>
//using namespace std;
//char arr[101][101];
//int main() {
//	int n, r = 0, c = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//		for (int j = 0; j < n; j++)
//			arr[i][j] = s[j];
//	}
//	for (int i = 0; i < n; i++) {
//		bool conti = false;
//		for (int j = 1; j < n; j++) {
//			if (arr[i][j] == 'X')
//				conti = false;
//			if (conti) continue;
//			if (arr[i][j] == '.' &&arr[i][j - 1] == arr[i][j]) {
//				r++;
//				conti = true;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		bool conti = false;
//		for (int j = 1; j < n; j++) {
//			if (arr[j][i] == 'X')
//				conti = false;
//			if (conti) continue;
//			if (arr[j][i] == '.' &&arr[j - 1][i] == arr[j][i]) {
//				c++;
//				conti = true;
//			}
//		}
//	}
//
//	cout << r <<" "<< c;
//	return 0;
//}