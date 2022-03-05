#include <cstdio>
#include <map>
#include <cmath>
#pragma warning(disable:4996)
using namespace std;
int main() {
	int n; scanf("%d",&n);
	double sum = 0;
	map<double,int> m;
	for (int i = 0; i < n; i++) {
		int t; scanf("%d", &t);
		m[t]++;
		sum += t;
	}
	double ex = 0;
	for (auto it = m.begin(); it != m.end(); it++) 
		ex += (*it).first * ((*it).second /(double)n);
	if (ex == 0 || n==0) printf("divide by zero");
	else {
		double res = (sum / n) / ex;
		res = round(res * 100);
		res /= 100;
		printf("%.2f",res);
	}
	return 0;
}