//#include <iostream>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		unsigned long long a, b;
//		cin >> a >> b;
//		if (a%b==0)
//			cout << "IMPOSSIBLE" << endl;
//		else {
//			for (unsigned long long j = 1; j*b < 1000000000; j++)
//				if ((j*b - 1) % a == 0) {
//					cout << j << endl;
//					break;
//				}
//		}
//	}
//	return 0;
//}