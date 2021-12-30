// https://www.acmicpc.net/problem/14501
// 백준 14501번 : 퇴사
// 관련 알고리즘 : DP, Brute Force

#include <iostream>
using namespace std;
int arr[15][2],n,mmax=0;
void back(int sum,int num,int d) {
	if (num == n) {
		if (sum > mmax)
			mmax = sum;
		return;
	}

	if (d == 0) {
		if(num + arr[num][0] <=n)
			back(sum + arr[num][1], num + 1, arr[num][0]-1);
		back(sum, num + 1, 0);
	}

	if (d >= 1) 
		back(sum, num + 1, d - 1);
}

int main() {
	int i;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i][0] >> arr[i][1];
	back(0,0,0);
	cout << mmax;
	return 0;
}