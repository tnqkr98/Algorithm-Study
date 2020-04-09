// https://www.acmicpc.net/problem/15686
// 백준 15686 번: 치킨 배달
// 관련 알고리즘 : Brute Force, Math(Combination)

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <cmath>
using namespace std;
vector<int*>cc;
void comb(int c, int m,int idx,int n,int sel[]) {
	if (n == m){
		/*for (int i = 0; i < c; i++)
			cout << sel[i] << ' ';
		cout << endl;*/
		int *nsel = new int[c];
		memcpy(nsel, sel, sizeof(int)*c);
		cc.push_back(nsel);
		return;
	}
	
	if (idx>=c) 
		return;

	int *nsel = new int[c];
	memcpy(nsel, sel, sizeof(int)*c);
	
	nsel[idx] = 1;
	comb(c, m,idx+1, n + 1, nsel);
	nsel[idx] = 0;
	comb(c, m,idx+1, n, nsel);
}

int main() {
	int n, m,i,j,k,arr[50][50],ch[13][250],min=1000,sum=0,glomin = 2000;
	vector<pair<int,int>> h, c;
	vector<int> minv;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				h.push_back(make_pair(i, j));
			else if (arr[i][j] == 2)
				c.push_back(make_pair(i, j));
		}

	//cout << "====" << endl;
	int *sel = new int[c.size()];
	memset(sel, 0, sizeof(int)*c.size());
	comb(c.size(), m,0, 0, sel);

	for (i = 0; i < c.size(); i++)
		for (j = 0; j < h.size(); j++)
			ch[i][j] = abs(c[i].first - h[j].first) + abs(c[i].second - h[j].second);

	//cout << "====" << endl;
	for (i = 0; i < cc.size(); i++) {
		/*for (int l = 0; l < c.size(); l++)
			cout << cc[i][l] << ' ';
		cout << endl;*/
		for (j = 0; j < h.size(); j++) {
			for (k = 0; k < c.size(); k++) {
				if (cc[i][k]) {
					if (ch[k][j] < min)
						min = ch[k][j];
				}
			}
			sum += min;
			min = 1000;
		}
		if (sum < glomin)
			glomin = sum;
		sum = 0;
	}
	cout << glomin;
	return 0;
}