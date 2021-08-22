//// https://www.acmicpc.net/problem/14890
//// 백준 14890번 : 경사로
//// 관련 알고리즘 : Simulation
//
//#include <iostream>
//#include <memory.h>
//#include <cmath>
//using namespace std; 
//int check[100] = { 0 }, map[100][100];
//int main() {
//	int n, l, i, j, t, num, cnt = 0,tmp[100];
//	bool fail = false;
//	cin >> n >> l;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			cin >> map[i][j];
//
//	for (i = 0; i < n; i++) {
//		num = map[i][0];
//		memset(check, 0, sizeof(check));
//		for (j = 1; j < n; j++) {
//			fail = false;
//			if (map[i][j] == num)
//				continue;
//			else if (abs(map[i][j] - num) > 1)
//				break;
//			else if (map[i][j] == num+1){//전조사
//				memcpy(tmp, check, sizeof(tmp));
//				for (t = 0; t < l; t++) {
//					if (j - 1 - t >= 0 && !check[j - 1 - t] && map[i][j - 1 - t] == num)
//						check[j - 1 - t] = 1;
//					else {
//						fail = true;
//						memcpy(check,tmp, sizeof(tmp));
//						break;
//					}
//				}
//				
//				if (!fail) {
//					num = map[i][j];
//					continue;
//				}
//				else
//					break;
//			}
//			else if (map[i][j] == num - 1) { // 후조사
//				memcpy(tmp, check, sizeof(tmp));
//				for (t = 0; t < l; t++) {
//					if (j + t < n && !check[j + t] && map[i][j + t] == map[i][j])
//						check[j + t] = 1;
//					else {
//						fail = true;
//						memcpy(check, tmp, sizeof(tmp));
//						break;
//					}
//				}
//				if (fail)
//					break;
//				else {
//					num = map[i][j];
//					j += (l - 1);
//					continue;
//				}
//			}
//		}
//			
//		if (j == n) 
//			cnt++;
//	}
//
//	for (i = 0; i < n; i++) {
//		num = map[0][i];
//		memset(check, 0, sizeof(check));
//		for (j = 1; j < n; j++) {
//			fail = false;
//			if (map[j][i] == num)
//				continue;
//			else if (abs(map[j][i] - num) > 1)
//				break;
//			else if (map[j][i] == num + 1) {//전조사
//				memcpy(tmp, check, sizeof(tmp));
//				for (t = 0; t < l; t++) {
//					if (j - 1 - t >= 0 && !check[j - 1 - t] && map[j - 1 - t][i] == num)
//						check[j - 1 - t] = 1;
//					else {
//						fail = true;
//						memcpy(check, tmp, sizeof(tmp));
//						break;
//					}
//				}
//
//				if (!fail) {
//					num = map[j][i];
//					continue;
//				}
//				else
//					break;
//			}
//			else if (map[j][i] == num - 1) { // 후조사
//				memcpy(tmp, check, sizeof(tmp));
//				for (t = 0; t < l; t++) {
//					if (j + t < n && !check[j + t] && map[j+t][i] == map[j][i])
//						check[j + t] = 1;
//					else {
//						fail = true;
//						memcpy(check, tmp, sizeof(tmp));
//						break;
//					}
//				}
//				if (fail)
//					break;
//				else {
//					num = map[j][i];
//					j += (l - 1);
//					continue;
//				}
//			}
//		}
//
//		if (j == n) 
//			cnt++;
//	}
//
//	cout << cnt;
//	return 0;
//}