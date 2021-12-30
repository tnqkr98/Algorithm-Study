/*
 https://www.acmicpc.net/problem/1927
 문제	 : 백준 11286번 절대값 힙(absolute value heap)
 알고리즘 : 우선순위 큐
 작성자	 : tnqkr98
 */

#include <cstdio>
#include <queue>
#include <cmath>
using namespace std;

class cmp {
public :
	bool operator()(int a, int b) {
		if (abs(a) > abs(b))
			return true;
		else if (abs(a) == abs(b))
			return a > b;
		else
			return false;
	}
};

int main() {
	priority_queue<int, vector<int>, cmp> pq;
	vector<int>v;
	int n, t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (t == 0 && !pq.empty()) {
			v.push_back(pq.top());
			pq.pop();
		}
		else if (t != 0)
			pq.push(t);
		else if (pq.empty())
			v.push_back(0);
	}
	for (int i = 0; i < v.size(); i++)
		printf("%d\n", v[i]);
	return 0;
}