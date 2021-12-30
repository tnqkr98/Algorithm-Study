#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int divn[50];
int findCnt(int num, int prm) {
	int cnt = 0;
	while (num > 0) {
		if (num%prm == 0) {
			cnt++;
			num /= prm;
		}
		else break;
	}
	return cnt;
}
int solution(vector<int> arr) {
	int answer = 1;
	vector<int> prime = { 2 };
	for (int num = 3; num <= 50; num++) {
		bool flag = 1;
		for (int i = 2; i*i <= num; i++)
			if (num%i == 0) {
				flag = 0;
				break;
			}
		if (flag) prime.push_back(num);
	}
	for (int i = 0; i < arr.size(); i++)
		for (int j = 0; j < prime.size(); j++)
			divn[prime[j]] = max(divn[prime[j]], findCnt(arr[i], prime[j]));
	for (int i = 0; i < prime.size(); i++)
		answer *= pow(prime[i], divn[prime[i]]);
	return answer;
}