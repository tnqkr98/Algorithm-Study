#include <string>

using namespace std;
long long solution(int N) {
	long long answer = 0, arr[81];
	arr[0] = 1; arr[1] = 1;
	for (int i = 2; i < N; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	answer = arr[N - 1] * 2 + (arr[N - 1] + arr[N - 2]) * 2;
	return answer;
}