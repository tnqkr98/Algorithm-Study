#include <cstdio>
#include <string>
#include <unordered_map>
#pragma warning(disable:4996)
using namespace std;
unordered_map<string, string> parent;
unordered_map<string, int> network;

string getParent(string a) {
	for (; a != parent[a]; a = parent[a]);
	return a;
}
bool find(string a, string b) {
	if (getParent(a) == getParent(b)) return 1;
	return 0;
}
int Union(string a, string b) {
	int num;
	a = getParent(a);
	b = getParent(b);
	num = network[a] + network[b];

	if (a.compare(b) > 0) {
		parent[b] = a;
		network[a] = num;
	}
	else {
		parent[a] = b;
		network[b] = num;
	}
	return num;
}
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		while (n--) {
			char t1[21], t2[21]; scanf("%s %s", t1,t2);
			string a = t1, b = t2;
			if (network[a] == 0) {
				network[a] = 1;
				parent[a] = a;
			}
			if (network[b] == 0) {
				network[b] = 1;
				parent[b] = b;
			}
			if (a == b || find(a, b)) printf("%d\n", network[getParent(a)]);
			else printf("%d\n", Union(a, b));
		}
		parent.clear();
		network.clear();
	}
	return 0;
}