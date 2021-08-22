//#include <iostream>
//#include <algorithm>
//#include <memory.h>
//using namespace std;
//int map[21][21], n,chk[21][21];
//void fun(int x, int y, int d1, int d2) {
//	for (int r = 0; r < n; r++) 
//		for (int c = 0; c < n; c++) 
//			if (r >= 0 && r < x + d1 && c >= 0 && c <= y) 
//				chk[r][c] = 1;
//	for (int r = 0; r < n; r++)
//		for (int c = 0; c < n; c++)
//			if (r >= 0 && r <= x+d2 && c >y && c <= n-1) 
//				chk[r][c] = 2;
//	for (int r = 0; r < n; r++)
//		for (int c = 0; c < n; c++)
//			if (r >= x + d1 && r <= n-1 && c >= 0 && c < y - d1 + d2) 
//				chk[r][c] = 3;
//	for (int r = 0; r < n; r++)
//		for (int c = 0; c < n; c++)
//			if (r > x + d2 && r <= n && c >= y - d1 + d2 && c <= n-1) 
//				chk[r][c] = 4;
//
//	int ly=-1,ry=1;
//	chk[x][y] = 5;
//	chk[x + d1 + d2][y - d1 + d2] = 5;
//	for (int i = x+1; i < x + d1 + d2; i++) {
//		for (int j = y + ly; j <= y + ry; j++) 
//			chk[i][j] = 5;
//		if (i < x + d1) ly--;
//		else ly++;
//		if (i < x + d2) ry++;
//		else ry--;
//	}
//}
//int sumnum(int k) {
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			if (chk[i][j] == k) sum += map[i][j];
//	return sum;
//}
//int main() {
//	int arr[5],gmin=1000000000;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> map[i][j];
//	for(int x=0;x<n-2;x++)
//		for(int y=1;y<n-1;y++)
//			for(int d1=1;d1<n;d1++)
//				for (int d2 = 1; d2 < n; d2++) {
//					if (y - d1 >= 0 && y + d2 < n && x + d1 + d2 < n && y+d2-d1 >=0 && y+d2-d1 <n && y>0 && y<n-1 && x<n-2) {
//						fun(x, y, d1, d2);
//						for (int k = 0; k < 5; k++)
//							arr[k] = sumnum(k + 1);
//						int min, max;
//						min = *min_element(arr, arr + 5);
//						max = *max_element(arr, arr + 5);
//						if (max - min <= gmin)
//							gmin = max - min;
//						memset(chk, 0, sizeof(chk));
//					}
//				}
//	cout << gmin;
//	return 0;
//}