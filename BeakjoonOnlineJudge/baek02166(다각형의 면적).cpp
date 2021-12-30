#include <cstdio>
#include <vector>
#include <cmath>
#pragma warning(disable:4996)
using namespace std;
struct xy {long long x, y;};
int main() {
	vector<xy> v;
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		long long x, y; scanf("%lld %lld", &x,&y);
		v.push_back({ x,y });
	}
	v.push_back(v[0]);
	double num1 = 0, num2 = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		num1 += v[i].x * v[i + 1].y;
		num2 += v[i].y * v[i + 1].x;
	}
	num1 -= num2;
	num1 = (num1 / 2)*(-1);
	num1 *= 10;
	num1 = round(num1)/10;
	printf("%.1lf", num1);
	return 0;
}