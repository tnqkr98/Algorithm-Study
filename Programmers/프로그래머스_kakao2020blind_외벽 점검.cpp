#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> Weak;
int findnext(int cur) {
	for (int i = 0; i < Weak.size(); i++)
		if (Weak[i] > cur)
			return i;
}

int solution(int n, vector<int> weak, vector<int> dist) {
	int answer = 10, size = weak.size();
	for (int i = 0; i < size; i++)
		weak.push_back(weak[i] + n);
	Weak = weak;
	sort(dist.begin(), dist.end());
	do {
		for (int i = 0; i < size; i++) {
			int cur = weak[i]; int end = weak[i + size - 1];
			for (int j = 0; j < dist.size(); j++) {
				cur += dist[j];
				if (cur >= end) {
					answer = min(answer, j + 1);
					break;
				}
				int next = findnext(cur);
				cur = weak[next];
			}
		}
	} while (next_permutation(dist.begin(), dist.end()));
	if (answer == 10) answer = -1;
	return answer;
}