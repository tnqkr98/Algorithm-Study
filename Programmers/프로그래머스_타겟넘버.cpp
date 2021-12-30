// 프로그래머스 타겟넘버 (DFS)

#include <string>
#include <vector>

using namespace std;

int size, tar, res = 0;
vector<int> num;

void recur(int n, int c) {
	if (c == size) {
		if (n == tar)
			res++;
		return;
	}
	recur(n + num[c], c + 1);
	recur(n - num[c], c + 1);
}

int solution(vector<int> numbers, int target) {
	size = numbers.size();
	tar = target;
	num = numbers;
	recur(num[0], 1);
	recur((-1)*num[0], 1);
	return res;
}
