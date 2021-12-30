#include <string>
#include <vector>
#include <queue>
using namespace std;
long long calcul(long long op1, long long op2, char o) {
	switch (o) {
	case '+': return op1 + op2;
	case '-': return op1 - op2;
	case '*': return op1 * op2;
	}
	return 0;
}
long long solution(string expression) {
	long long answer = 0, op1 = -1, op2 = -1, res;
	int s = 0, qsize;
	char order[6][3] = { {'+','-','*'},{'+','*','-'},{'-','*','+'},{'-','+','*'},{'*','-','+'},{'*','+','-'} };
	queue<long long> qnum, qnum_s;
	queue<char> qop, qop_s;
	int it;
	for (it = 0; it < expression.size(); it++)
		if (expression[it] == '+' || expression[it] == '-' || expression[it] == '*') {
			qnum.push(stol(expression.substr(s, it - s)));
			qop.push(expression[it]);
			s = it + 1;
		}
	qnum.push(stol(expression.substr(s, it - s)));
	for (int i = 0; i < 6; i++) {
		qnum_s = qnum;
		qop_s = qop;
		for (int j = 0; j < 3; j++) {
			qsize = qnum.size();
			op1 = qnum.front();
			for (int k = 1; k < qsize; k++) {
				qnum.pop();
				op2 = qnum.front();
				if (qop.front() == order[i][j]) {
					res = calcul(op1, op2, order[i][j]);
					op1 = res;
					qnum.front() = res;
					qop.pop();
				}
				else {
					qop.push(qop.front());
					qop.pop();
					qnum.push(op1);
					op1 = op2;
				}
			}
			qnum.push(qnum.front());
			qnum.pop();
		}
		if (qnum.front() < 0) qnum.front() *= -1;
		if (qnum.front() > answer) answer = qnum.front();
		qnum = qnum_s;
		qop = qop_s;
	}

	return answer;
}