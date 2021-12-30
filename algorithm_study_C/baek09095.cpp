//// https://www.acmicpc.net/problem/16236
//// baekjoon No.9095 : 1,2,3 ¥ı«œ±‚
//// Algorithm : Dynamic Programming
//
//#include <iostream>
//using namespace std;
//int main() {
//	int t,d[12],i,in;
//	cin >> t;
//	d[1] = 1;
//	d[2] = 2;
//	d[3] = 4;
//	for (i = 4; i <= 11; i++) 
//		d[i] = d[i - 1] + d[i - 2] + d[i - 3];
//	for (i = 0; i < t; i++) {
//		cin >> in;
//		cout << d[in]<<endl;
//	}
//
//
//	return 0;
//}