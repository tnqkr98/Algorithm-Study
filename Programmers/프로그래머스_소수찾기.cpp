// 프로그래머스 소수찾기 ( BruteForce, Memoization)

#include <string>
#include <vector>
#include <cmath>
#include <memory.h>

using namespace std;

bool primeTest(int n) {
	for (int i = 2; i*i <= n; i++)
		if (n%i == 0)
			return false;
	return true;
}

int solution(string numbers) {
	int answer = 0;
	int arr[10] = { 0 }, cpyarr[10];
	for (int i = 0; i < numbers.size(); i++)
		arr[numbers[i] - '0']++;

	string tmp;

	for (int i = 2; i < 10000000; i++) {
		if (i >= pow(10, numbers.size()))
			break;

		if (primeTest(i)) {
			tmp = to_string(i);
			memcpy(cpyarr, arr, sizeof(arr));
			int j;
			for (j = 0; j < tmp.size(); j++)
				if (--arr[tmp[j] - '0'] < 0)
					break;
			if (j == tmp.size())
				answer++;
			memcpy(arr, cpyarr, sizeof(arr));
		}
	}

	return answer;
}