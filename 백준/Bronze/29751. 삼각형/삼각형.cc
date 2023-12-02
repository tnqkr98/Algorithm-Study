#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	double w, h; 
	scanf("%lf %lf", &w, &h);
	printf("%.1lf", w * h / 2);
	return 0;
}