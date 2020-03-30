/*
 https://www.acmicpc.net/problem/1927
 ����	 : ���� 1927�� �ּ� ��
 �˰��� : �켱���� ť
 �ۼ���	 : tnqkr98
 */
#include <iostream>
#include <queue>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int main() {
	priority_queue<int, vector<int>, greater<int>> pq; 
	vector<int>v;
	int n, t;
	cin >> n;
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