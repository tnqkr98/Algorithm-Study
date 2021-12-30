#include <iostream>
#include <string>
#include <memory.h>
#define MIN(a,b) (((a)>(b))?(b):(a))
using namespace std;
int n,mmin=401;
void func(int coin[],int r) {
	int total = 0;
	if (r == n) {	// 모든 행에 대한 뒤집 or 안뒤집 수행끝난 리프노드(row대한 일이 끝남)
		for (int i = 0; i < n; i++) {  // 각 열을 선택해가며, 뒤집는게 이득인지 아닌지 판단
			int tcnt = 0;
			for (int j = 0; j < n; j++)  // 행을 순회하기 위한 루프
				if (coin[j] & (1 << i)) 	// i번째 비트가 1(=T)인지 확인
					tcnt++;		
			//여기서 열의 t개수가 나옴
			total += MIN(tcnt, n - tcnt); // 해당 열을 뒤집는게 이득인지 안뒤집는게 이득인지 확인하여 이득인걸 더함
		}
		if (total < mmin)	//최종적으로 결정된 이번 경우의 행렬의 t개수가 전체 최소보다 작은지 확인
			mmin = total;
		return;
	}

	func(coin, r+1);
	coin[r] = ~coin[r];
	func(coin, r+1);
} 

int main() {
	int coin[21] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int num = 1;
		cin >> s;
		// 비트마스킹
		for (int j = n-1; j >=0; j--) {
			if(s[j] == 'T') coin[i] += num;
			num *= 2;
		}
	}
	func(coin, 0);
	cout << mmin;
	return 0;
}