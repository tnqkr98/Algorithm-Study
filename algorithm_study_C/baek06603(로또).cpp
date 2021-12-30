#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int k,visit[14];
void back(int cur,int d) {
	if (d == 6) {
		for (int i = 0; i < k; i++) 
			if (visit[i]) cout << v[i]<<" ";
		cout << endl;
		return;
	}
	for (int i = cur; i <= d+k-6; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			back(i,d + 1);
			visit[i] = 0;
		}
	}
}
int main() {
	do {
		v.clear();
		fill(visit, visit + 14, 0);
		cin >> k;
		for (int i = 0; i < k; i++) {
			int t; cin >> t;
			v.push_back(t);
		}
		back(0,0);
		cout << endl;
	} while (k != 0);
	return 0;
}