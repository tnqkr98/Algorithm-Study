// level 2(2020 KAKAO BLIND RECRUITMENT)

#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(string p) {
	int c1 = 0, c2 = 0;
	string answer = "", u = "", v = "";
	stack<int> s;
	for (int i = 0; i < p.size(); i++) {
		if (p[i] == '(') {
			c1++;
			s.push(0);
		}
		else if (p[i] == ')') {
			c2++;
			if (!s.empty() && s.top() == 0)
				s.pop();
			else
				s.push(1);
		}
		u += p[i];
		if (c1 && c2 && (c1 == c2)) {
			if (s.size() == 0) {
				answer += u;
				u = ""; c1 = 0; c2 = 0;
				continue;
			}
			else {
				answer += "(";
				u = u.substr(1);
				u.pop_back();
				answer += solution(p.substr(i + 1)) + ")";
				for (int j = 0; j < u.size(); j++) {
					if (u[j] == '(')
						u[j] = ')';
					else
						u[j] = '(';
				}
				answer += u;
				break;
			}

		}
	}
	return answer;
}