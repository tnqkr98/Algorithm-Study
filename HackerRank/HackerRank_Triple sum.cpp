#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
long triplets(vector<int> a, vector<int> b, vector<int> c) {
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());
	long sum = 0;
	int ai = 0,anum=0, ci = 0,cnum=0;
	for (int i = 0; i < b.size(); i++) {
		if (i > 0 && b[i] == b[i - 1]) continue;
		while(ai<a.size()) {
			if (a[ai] <= b[i]) {
				if (ai>0 && a[ai] != a[ai - 1]) anum++;
				else if (ai == 0) anum++;
				ai++; 
			}
			else break;
		}
		while (ci < c.size()) {
			if (c[ci] <= b[i]) {
				if (ci>0 && c[ci] != c[ci - 1]) cnum++;
				else if (ci == 0) cnum++;
				ci++;
			}
			else break;
		}
		sum += anum * cnum;
	}
	return sum;
}

int main() {
	cout << triplets({ 1,1 }, { 1,1,1,2 }, { 1,1 });

	return 0;
}