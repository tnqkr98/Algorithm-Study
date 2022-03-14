#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
map<int, int> mech;
long maxday = 0;
long parametric(long day) {  // expected production until day
	long ex = 0;
	for (int i = 1; i <= day; i++) {
		if (i > maxday) break;
		if (mech.find(i) != mech.end()) 
			ex += (day / i)*mech[i];
	}
	return ex;
}
long minTime(vector<long> machines, long goal) {
	/*for (auto i : machines) {
		mech[i]++;
		if (i > maxday) maxday = i;
	}*/
	long l = 0, r = 1000000000,res=0;
	while (l < r) {
		long mid = (l + r) / 2;
		long ex = 0;
		for (int i = 0; i < machines.size(); i++) {
			ex += (mid / machines[i]);
		}

		if (ex >= goal) {
			r = mid - 1;
			res = mid;
		}
		else if (ex < goal) 
			l = mid + 1;
	}
	return res;
}


int main() {
	int a = minTime({ 2 ,3 },5);
	cout << a;
	return 0;
}