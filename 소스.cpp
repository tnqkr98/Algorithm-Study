//#include <string>
//#include <vector>
//#include <stack>
//#include <iostream>
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<int> moves) {
//	int answer = 0, a, b;
//	stack<int> *s = new stack<int>[board.size()];
//	stack<int> r;
//	for (int i = board.size() - 1; i >= 0; i--)
//		for (int j = 0; j < board.size(); j++)
//			s[j].push(board[i][j]);
//
//	for (int i = 0; i < moves.size(); i++) {
//		if (!s[moves[i] - 1].empty()) {
//			if (!r.empty()) {
//				a = r.top();
//				b = s[moves[i] - 1].top();
//				if (a == b) {
//					answer += 2;
//					r.pop();
//					s[moves[i] - 1].pop();
//				}
//				else {
//					r.push(s[moves[i] - 1].top());
//					s[moves[i] - 1].pop();
//				}
//
//			}
//			else {
//				r.push(s[moves[i] - 1].top());
//				s[moves[i] - 1].pop();
//			}
//		}
//	}
//
//	return answer;
//}
//
//int main() {
//	vector<int> a1 = { 0, 0, 0, 0, 0 };
//	vector<int> a2 = { 0, 0, 1, 0, 3 };
//	vector<int> a3 = { 0, 2, 5, 0, 1 };
//	vector<int> a4 = { 4, 2, 4, 4, 2 };
//	vector<int> a5 = { 3, 5, 1, 3, 1 };
//	vector<vector<int>> a;
//	a.push_back(a1);
//	a.push_back(a2);
//	a.push_back(a3);
//	a.push_back(a4);
//	a.push_back(a5);
//
//	cout<<solution(a, { 1,5,3,5,1,2,1,4 });
//	return 0;
//}