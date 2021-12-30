// level 2 (Ω∫≈√/≈•) //////
//

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
	int answer = 0;
	bool flag = false;
	stack<int> s;
	for (int i = 0; i < arrangement.size(); i++) {
		if (arrangement[i] == '(') {
			flag = false;
			s.push(1);
		}
		else if (arrangement[i] == ')')
		{
			if (!flag) {
				s.pop();
				answer += s.size();
			}
			else {
				s.pop();
				answer++;
			}
			flag = true;
		}
	}
	return answer;
}