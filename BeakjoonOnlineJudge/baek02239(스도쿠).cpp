#include <iostream>
#include <string>
using namespace std;
int sdo[10][10],flag=0;
bool issq(int r,int c,int num) {
	r = (r / 3)*3;
	c = (c / 3)*3;
	bool check[10] = { 0 };
	for (int i = r; i < r + 3; i++)
		for (int j = c; j < c + 3; j++)
			check[sdo[i][j]] = 1;
	return check[num];
}
bool isrow(int r, int c, int num) {
	bool check[10] = { 0 };
	for (int i = 0; i < 9; i++)
		check[sdo[r][i]] = 1;
	return check[num];
}
bool iscol(int r, int c, int num) {
	bool check[10] = { 0 };
	for (int i = 0; i < 9; i++)
		check[sdo[i][c]] = 1;
	return check[num];
}
void back(int cur) {
	if (cur == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				cout << sdo[i][j];
			cout << endl;
		}
		flag = 1;
		return;
	}
	int r=cur/9, c=cur%9;
	if (sdo[r][c] != 0) 
		back(cur + 1);
	else 
		for (int i = 1; i <= 9; i++) 
			if (!issq(r, c, i) && !isrow(r, c, i) && !iscol(r, c, i)) {
				sdo[r][c] = i;
				back(cur + 1);
				if (flag) return;
				sdo[r][c] = 0;
			}	
}
int main() {
	for (int i = 0; i < 9; i++) {
		string s; cin >> s;
		for (int j = 0; j < 9; j++) 
			sdo[i][j] = s[j]-'0';
	}
	back(0);
	return 0;
}