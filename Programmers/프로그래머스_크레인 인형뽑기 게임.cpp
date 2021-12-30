// 2019 카카오 개발자 겨울 인턴십

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0, a, b;
	stack<int> *s = new stack<int>[board.size()];
	stack<int> r;
	for (int i = board.size() - 1; i >= 0; i--)
		for (int j = 0; j < board.size(); j++) {
			if (board[i][j] != 0)
				s[j].push(board[i][j]);
		}

	for (int i = 0; i < moves.size(); i++) {
		if (!s[moves[i] - 1].empty()) {
			if (!r.empty()) {
				a = r.top();
				b = s[moves[i] - 1].top();
				if (a == b) {
					answer += 2;
					r.pop();
					s[moves[i] - 1].pop();
				}
				else {
					r.push(s[moves[i] - 1].top());
					s[moves[i] - 1].pop();
				}

			}
			else {
				r.push(s[moves[i] - 1].top());
				s[moves[i] - 1].pop();
			}
		}
	}

	return answer;
}