#include <string>
#include <vector>
#include <deque>
using namespace std;
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	int size;
	for (int i = 0; i < n; i++) {
		deque<int> dq1, dq2;
		while (arr1[i] > 0) {
			dq1.push_front(arr1[i] % 2);
			arr1[i] /= 2;
		}
		size = dq1.size();
		for (int j = 0; j < n - size; j++)
			dq1.push_front(0);

		while (arr2[i] > 0) {
			dq2.push_front(arr2[i] % 2);
			arr2[i] /= 2;
		}
		size = dq2.size();
		for (int j = 0; j < n - size; j++)
			dq2.push_front(0);

		string s = "";
		for (int j = 0; j < n; j++) {
			if (dq1[j] == 1 || dq2[j] == 1)
				s += "#";
			else
				s += " ";
		}
		answer.push_back(s);
	}
	return answer;
}