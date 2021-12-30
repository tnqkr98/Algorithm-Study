#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer, res;
	for (int i = 0; i < numbers.size(); i++)
		for (int j = i + 1; j < numbers.size(); j++)
			answer.push_back(numbers[i] + numbers[j]);
	sort(answer.begin(), answer.end());
	int p = answer[0];
	res.push_back(p);
	for (int i = 1; i < answer.size(); i++) {
		if (p != answer[i]) {
			res.push_back(answer[i]);
			p = answer[i];
		}
	}
	return res;
}