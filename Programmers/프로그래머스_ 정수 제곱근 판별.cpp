#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
	long long answer = 0;
	double s = sqrt(n);
	if (s - (long long)s == 0)
		return ((long long)s + 1)*((long long)s + 1);
	else
		return -1;
}