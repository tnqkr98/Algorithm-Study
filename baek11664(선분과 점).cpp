#include <cstdio>
#include <cmath>
#pragma warning(disable:4996)
using namespace std;
struct point {
	double x, y, z;
};
double dist(point a,point b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}
int main() {
	point a, b, c,m;
	double min = 1e9;
	scanf("%lf %lf %lf", &a.x, &a.y, &a.z);
	scanf("%lf %lf %lf", &b.x, &b.y, &b.z);
	scanf("%lf %lf %lf", &c.x, &c.y, &c.z);

	int cnt = 10000000;
	while (cnt--) {
		double da, db, dm;
		m.x = (a.x + b.x) / 2.;
		m.y = (a.y + b.y) / 2.;
		m.z = (a.z + b.z) / 2.;

		da = dist(a, c);
		db = dist(b, c);
		dm = dist(m, c);
		
		if (abs(dm - min) <= 0.00000000001) break;
		if (dm < min) min = dm;
		if (da > db) {
			a = m;
		}
		else {
			b = m;
		}
	}

	printf("%0.10lf", min);
	return 0;
}