// https://www.acmicpc.net/submit/1699
// 백준 1699 번 : 제곱수의 합
// 관련 알고리즘 : Dynamic Programming

#include <iostream>
#include <vector>
#define MIN(a,b) (((a)>(b))?(b):(a))
using namespace std;
int d[110000] = {0};
int main() {
	int i, n,ri=0,j;
	cin >> n;
	vector<int> r;
	for (i = 1; i*i <= 110000; i++) 
		r.push_back(i*i);
	d[0] = 0;
	d[1] = 1;
	d[2] = 2;
	d[3] = 3;
	for (i = 4; i <= n; i++) {
		if (d[i] == 0)
			d[i] = 200;
		if (i == r[ri + 1]) {
			ri += 1;
			d[i] = 1;
			continue;
		}
		
		for(j=0;j<=ri;j++)
			d[i] = MIN(d[r[ri-j]] + d[i - r[ri-j]], d[i]);	
	}
	cout<<d[n];

	return 0;
}