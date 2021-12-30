#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;
	int min = arr[0];
	if (arr.size() == 1) {
		answer.push_back(-1);
		return answer;
	}
	for (int i : arr)
		if (i < min) min = i;
	for (int i : arr)
		if (i != min) answer.push_back(i);
	return answer;
}