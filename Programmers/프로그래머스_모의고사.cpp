// 프로그래머스 모의고사
// 분야 : 완전탐색

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;

	int uarr[5] = { 1,2,3,4,5 };
	int uarr2[8] = { 2,1,2,3,2,4,2,5 };
	int uarr3[10] = { 3,3,1,1,2,2,4,4,5,5 };
	vector<int> c(3, 0);
	for (vector<int>::size_type i = 0; i < answers.size(); i++) {
		if (uarr[i % 5] == answers[i]) c[0]++;
		if (uarr2[i % 8] == answers[i]) c[1]++;
		if (uarr3[i % 10] == answers[i]) c[2]++;
	}
	int max = *max_element(c.begin(), c.end());

	for (int i = 0; i < 3; i++)
		if (max == c[i])
			answer.push_back(i + 1);

	return answer;
}