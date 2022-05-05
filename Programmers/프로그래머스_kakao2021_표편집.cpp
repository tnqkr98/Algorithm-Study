#include <string>
#include <vector>
#include <stack>
using namespace std;
int pn[1000001][2];
stack<int> del;
string solution(int n, int k, vector<string> cmd) {
	string answer = "";
	int last = n - 1;
	int past = -1, next = 1;
	for (int i = 0; i < n; i++) {
		answer.push_back('O');
		pn[i][0] = past++;
		pn[i][1] = next++;
	}
	for (int i = 0; i < cmd.size(); i++) {
		char c = cmd[i][0];
		int x = 0;
		if (cmd[i].size() > 2) x = stoi(cmd[i].substr(2));
		if (c == 'U') {
			for (int j = 0; j < x; j++) k = pn[k][0];
		}
		else if (c == 'D') {
			for (int j = 0; j < x; j++) k = pn[k][1];
		}
		else if (c == 'C') {
			answer[k] = 'X';
			del.push(k);
			if (k == last) {
				k = pn[k][0];
				last = k;
			}
			else {
				int kpast = pn[k][0];
				int knext = pn[k][1];
				if (kpast != -1) pn[kpast][1] = pn[k][1];
				if (k != last) pn[knext][0] = pn[k][0];
				k = pn[k][1];
			}
		}
		else {
			int p = del.top(); del.pop();
			int pnext = pn[p][1];
			int ppast = pn[p][0];
			answer[p] = 'O';
			if (ppast != -1) pn[ppast][1] = p;
			if (p != last) pn[pnext][0] = p;
			if (p > last) last = p;
		}
	}
	return answer;
}