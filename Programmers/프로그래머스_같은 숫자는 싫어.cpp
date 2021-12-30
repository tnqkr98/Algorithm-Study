#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	int past = arr[0];
	vector<int> answer;
	answer.push_back(arr[0]);
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] != arr[i - 1]) {
			answer.push_back(arr[i]);
			past = arr[i];
		}
	}
	return answer;
}