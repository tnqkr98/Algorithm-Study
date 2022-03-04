#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct rc {int r, c,d;};
int omap[16][16],n,m,d;
vector<rc> ce,de;
bool cmp(rc a,rc b) {
	if (a.d < b.d) return 1;
	else if (a.d == b.d) 
		if (a.c < b.c) return 1;
	return 0;
}
int cald(rc a, rc b) {
	return abs(a.r - b.r) + abs(a.c - b.c);
}
void finde(int a, int b,int c) {
	de.clear();
	vector<rc> finda, findb, findc;
	for (int i = 0; i < ce.size(); i++) {
		finda.push_back({ ce[i].r,ce[i].c,cald(ce[i],{n,a}) });
		findb.push_back({ ce[i].r,ce[i].c,cald(ce[i],{n,b}) });
		findc.push_back({ ce[i].r,ce[i].c,cald(ce[i],{n,c}) });
	}
	sort(finda.begin(), finda.end(), cmp); 
	if(finda[0].d<=d) de.push_back(finda[0]);
	sort(findb.begin(), findb.end(), cmp); 
	if (findb[0].d <= d) de.push_back(findb[0]);
	sort(findc.begin(), findc.end(), cmp); 
	if (findc[0].d <= d) de.push_back(findc[0]);
}
int dele() {
	int res = 0;
	for (auto rc : de) 
		for (int i = 0; i < ce.size(); i++) {
			if (rc.r == ce[i].r && rc.c == ce[i].c) {
				ce[i].d = 9;
				break;
			}
		}
	vector<rc> newce;
	for (int i = 0; i < ce.size(); i++) {
		if (ce[i].d != 9) {
			newce.push_back(ce[i]);
		}
		else res++;
	}
	//ce.clear();
	ce = newce;
	return res;
}
void movee() {
	vector<rc> newce;
	for (int i = 0; i < ce.size(); i++) {
		if (ce[i].r < n - 1) {
			ce[i].r++;
			newce.push_back({ ce[i] });
		}
	}
	//ce.clear();
	ce = newce;
}
int main() {
	vector<rc> oe;
	cin >> n >> m >> d;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> omap[i][j];
			if (omap[i][j]) oe.push_back({ i,j });
		}
	// 궁수의 위치를 정함
	// 로직을 수행 (적제거, 적 한칸 이동)
	int max = 0;
	for(int a=0;a<m;a++)			// n,(a,b,c) 궁수 위치
		for(int b=a+1;b<m;b++)
			for (int c = b + 1; c < m; c++) {
				int sum = 0;
				ce = oe;
				while (ce.size() > 0) {
					finde(a, b, c);
					sum+=dele();
					movee();
				}
				if (sum > max) max = sum;
			}
	cout << max;
	return 0;
}