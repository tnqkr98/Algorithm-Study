/*
 https://www.acmicpc.net/problem/1927
 ����	 : ���� 11286�� ���밪 ��(absolute value heap)
 �˰��� : �켱���� ť
 �ۼ���	 : tnqkr98
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