#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;
struct abc { int a, b, c; };
struct cmp {
	bool operator()(const abc& a,const abc& b)const {
		if (a.a < b.a) return 1;
		else if (a.a == b.a) {
			if (a.b < b.b) return 1;
			else if (a.b == b.b) {
				if (a.c < b.c) return 1;
			}
		}
		return 0;
	}
};
queue<abc> q;
set<abc,cmp> s;
bool res = false;
void bfs() {
	if (q.empty()) return;
	int arr[3],na,nb,nc;
	arr[0] = q.front().a;
	arr[1] = q.front().b;
	arr[2] = q.front().c; q.pop();
	if (arr[0] == arr[1] && arr[1] == arr[2]) {
		res = true;
		return;
	}
	sort(arr, arr + 3);
	if (arr[0] != arr[1]) {
		na = arr[0] + arr[0];
		nb = arr[1] - arr[0];
		if (s.find({ na,nb,arr[2] }) == s.end()) {
			s.insert({ na,nb,arr[2] });
			q.push({ na,nb,arr[2] });
		}
	}
	if (arr[0] != arr[2]) {
		na = arr[0] + arr[0];
		nc = arr[2] - arr[0];
		if (s.find({ na,arr[1],nc }) == s.end()){
			s.insert({ na,arr[1],nc });
			q.push({ na,arr[1],nc });
		}
	}
	if (arr[1] != arr[2]) {
		nb = arr[1] + arr[1];
		nc = arr[2] - arr[1];
		if (s.find({ arr[0],nb,nc }) == s.end()){
			s.insert({ arr[0],nb,nc });
			q.push({ arr[0],nb,nc });
		}
	}
	bfs();
}
int main() {
	int arr[3]; 
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	s.insert({ arr[0],arr[1],arr[2] });
	q.push({ arr[0],arr[1],arr[2] });
	bfs();
	if (res) cout << 1; else cout << 0;
	return 0;
}