#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n, k;
bool alpha[26];
vector<int> v,all,comp;
void find(int val,int s, int d) {
	if (d > k) return;
	if (d == k) {
		comp.push_back(val);
		return;
	}
	for (int i = s; i < all.size(); i++) {
		int num = val | 1<< all[i];
		find(num,i+1,d +1);
	}
}
int main() {
	cin >> n >> k;
	int nval = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int voc = 0;
		for (int j = 0; j < s.size(); j++) {
			voc = voc | 1 << (s[j] - 'a');
			if (!alpha[s[j] - 'a']) {
				alpha[s[j] - 'a'] = 1;
				all.push_back(s[j] - 'a');
				nval = nval | 1<< (s[j] - 'a');
			}
		}
		v.push_back(voc);
	}
	int cnt = 0;
	if (k < 4) cout << 0;
	else if(all.size() <= k){
		for (int i = 0; i < v.size(); i++) 
			if (v[i] | nval == nval) cnt++;
		cout << cnt;
	}
	else {
		find(0, 0,0);
		for (int i = 0; i < comp.size(); i++) {
			int lcnt=0;
			for (int j = 0; j < v.size(); j++) 
				if ((v[j] | comp[i]) == comp[i] ) lcnt++;
			if (lcnt > cnt) cnt = lcnt;
		}
		cout << cnt;
	}

	return 0;
}