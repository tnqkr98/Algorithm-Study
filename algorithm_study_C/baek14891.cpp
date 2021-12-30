//// https://www.acmicpc.net/problem/14891
//// 백준 14891 번 : 톱니바퀴
//// 관련 알고리즘 : simulation
//
//#include <iostream>
//#include <deque>
//#include <string>
//#include <memory.h>
//#include <cmath>
//using namespace std;
//int main() {
//	deque<char> t[4];
//	bool join[3] = {0};
//	int darr[4] = {0};
//	string s;
//	int i, j, k, num, dir, sum=0;
//	for (i = 0; i < 4; i++) {
//		cin >> s;
//		for (j = 0; j < 8; j++)
//			t[i].push_back(s[j]);
//	}
//
//	for (i = 0; i < 3; i++) 
//		if (t[i][2] == t[i+1][6])
//			join[i] = 0;
//		else
//			join[i] = 1;
//
//	cin >> k;
//	for (i = 0; i < k; i++) {
//		cin >> num >> dir;
//		darr[num-1] = dir;
//		if (num == 1) {
//			for (j = 0; j < 3; j++)
//				if (join[j]) darr[j + 1] = darr[j] * (-1);
//		}
//		else if (num == 2) {
//			if (join[0]) darr[0] = darr[1] * (-1);
//			if (join[1]) darr[2] = darr[1] * (-1);
//			if (join[2]) darr[3] = darr[2] * (-1);
//		}
//		else if (num == 3) {
//			if (join[1]) darr[1] = darr[2] * (-1);
//			if (join[2]) darr[3] = darr[2] * (-1);
//			if (join[0]) darr[0] = darr[1] * (-1);
//		}
//		else {
//			for (j = 3; j > 0; j--)
//				if (join[j-1]) darr[j - 1] = darr[j] * (-1);
//		}
//
//		for (j = 0; j < 4; j++) {
//			if (darr[j] != 0) {
//				if(darr[j] == 1){
//					t[j].push_front(t[j].back());
//					t[j].pop_back();
//				}
//				else{
//					t[j].push_back(t[j].front());
//					t[j].pop_front();
//				}
//			}
//		}
//
//		for (j = 0; j < 3; j++)
//			if (t[j][2] == t[j + 1][6])
//				join[j] = 0;
//			else
//				join[j] = 1;
//		memset(darr, 0, sizeof(darr));
//	}
//
//	for (i = 0; i < 4; i++) 
//		if(t[i][0] == '1') sum+=pow(2, i);
//	
//	cout << sum;
//	return 0;
//}