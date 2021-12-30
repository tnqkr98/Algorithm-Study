#include <iostream>
#include <time.h>
#pragma warning(disable:4996)
using namespace std;
int main() {
	time_t timer;
	struct tm *t;
	timer = time(NULL);
	t = localtime(&timer);
	cout << t->tm_year + 1900<<endl;
	cout << t->tm_mon + 1 << endl;
	cout << t->tm_mday << endl;
	return 0;
}