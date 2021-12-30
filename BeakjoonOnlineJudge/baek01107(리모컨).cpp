// https://www.acmicpc.net/problem/1107
// 백준 5457 번 : 리모컨
// 관련 알고리즘 : Brute Force

#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int len,mmin=500000, qnum;
bool brok[10] = { 0 };
char n[8];
void recur(int i,int num) {
	if (i == len) {
		if (abs(qnum - num) + i < mmin) 
			mmin = abs(qnum - num) + i;
		return;
	}
	else if (len == 0)
		return;
	num *= 10;
	for (int j = 0; j < 10; j++) {
		if (!brok[j]) {
			num += j;
			recur(i + 1, num);
			num -= j;
		}
	}
}

int main() {
	int m,i,t,j;
	cin >> n>>m;
	for (i = 0; i < m; i++) {
		cin >> t;
		brok[t] = 1;
	}
	if (atoi(n) == 100)
		cout << "0";
	else if(atoi(n) != 100){
		len = strlen(n);
		qnum = atoi(n);
		for (i = 0; i < 10; i++)
			if (!brok[i])
				recur(1, i);
		len -= 1;
		qnum = atoi(n);
		for (i = 0; i < 10; i++)
			if (!brok[i])
				recur(1, i);
		len += 2;
		qnum = atoi(n);
		for (i = 0; i < 10; i++)
			if (!brok[i])
				recur(1, i);
		if (abs(atoi(n) - 100) > mmin)
			cout << mmin;
		else
			cout << abs(atoi(n) - 100);
	}
	return 0;
}