#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Trie {
	Trie *ch[10];
	bool end;
	Trie() {
		end = false;
		for (int i = 0; i < 10; i++) ch[i] = NULL;
	}
	~Trie() {
		for (int i = 0; i < 10; i++) if (ch[i]) delete ch[i];
	}
	bool insert(const char *s) {
		if (!*s) {
			end = true;
			return false;
		}
		else if (end == true)
			return end; 
		int now = *s - '0';
		if (!ch[now]) ch[now] = new Trie;
		return ch[now]->insert(s + 1);
	}
};
int main() {
	int t; cin >> t;
	
	while (t--) {
		Trie *root = new Trie;
		vector<string> v;
		bool flag = 1;
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end());
		for (auto s : v) {
			if (root->insert(s.c_str())) {
				cout << "NO" << endl;
				flag = 0;
				break;
			}
		}
		if (flag) cout << "YES" << endl;
	}

	return 0;
}