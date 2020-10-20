#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
vector<char> v;
int n, m;
bool visit[16];
void back(string s,int d,int a,int b,int p) {
	if (d == n) {
		if (a > 0 && b > 1)
			cout << s << endl;
			//printf("%s", s.c_str());
		return;
	}
	for (int i = 0; i < m; i++) {
		if (!visit[i] && v[i]>p) {
			visit[i] = 1;
			if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
				back(s + v[i], d + 1, a + 1, b,v[i]);
			else
				back(s + v[i], d + 1, a, b+1,v[i]);
			visit[i] = 0;
		}
	}
}
int main() {
	//scanf("%d %d", &n, &m);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		char c;
		cin >> c;
		v.push_back(c);
	}
	sort(v.begin(), v.end());
	back("", 0, 0, 0,0);
	return 0;
}