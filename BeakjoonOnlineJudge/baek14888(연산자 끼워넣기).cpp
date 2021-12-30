// https://www.acmicpc.net/problem/14888
// 백준 14888번 연산자 끼워넣기
// 관련 알고리즘 : Backtracking, Brute Force

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, *arr, oper[4];
vector<int> v;
void back(int d,int r) {
	int save = r;
	if (d == n) {
		v.push_back(r);
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (oper[i] > 0) {
			oper[i]--;
			switch (i) {
			case 0:
				r += arr[d];
				break;
			case 1:
				r -= arr[d];
				break;
			case 2:
				r *= arr[d];
				break;
			case 3:
				r /= arr[d];
				break;
			}
			back(d + 1, r);
			oper[i]++;
			r = save;
		}
	}
}

int main() {
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < 4; i++)
		cin >> oper[i];
	back(1, arr[0]);
	cout << *max_element(v.begin(), v.end()) << endl;
	cout << *min_element(v.begin(), v.end());
	return 0;
}
