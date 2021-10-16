#include <iostream>
#include <deque>
#include <string>
#include <vector>
using namespace std;
typedef vector<char> v;
typedef vector<v> vc;
vc f(3,v(3)),b(3, v(3)),u(3, v(3)),d(3, v(3)),l(3, v(3)),r(3, v(3));
deque<char> cubing(deque<char> dq, bool t) {
	if (t) for (int i = 0; i < 3; i++) {
			char tmp = dq[11];
			dq.pop_back();
			dq.push_front(tmp);
		}
	else for (int i = 0; i < 3; i++) {
			char tmp = dq[0];
			dq.pop_front();
			dq.push_back(tmp);
		}
	return dq;
}
vc rot(vc tar,bool t) {
	vc tmp(3,v(3));
	if (t) for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++) tmp[i][j] = tar[2-j][i];
	else for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++) tmp[i][j] = tar[j][2-i];
	return tmp;
}
void init() {
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++) {
			u[i][j] = 'w';d[i][j] = 'y';
			f[i][j] = 'r';b[i][j] = 'o';
			l[i][j] = 'g';r[i][j] = 'b';
		}
}
void fmov(bool t) {
	deque<char> dq;
	f = rot(f, t);
	for (int i = 0; i < 3; i++) dq.push_back(u[2][i]);
	for (int i = 0; i < 3; i++) dq.push_back(r[i][0]);
	for (int i = 0; i < 3; i++) dq.push_back(d[0][2-i]);
	for (int i = 0; i < 3; i++) dq.push_back(l[2-i][2]);
	dq = cubing(dq, t);
	for (int i = 0; i < 3; i++) {
		u[2][i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		r[i][0] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		d[0][2 - i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		l[2 - i][2]= dq.front();dq.pop_front();
	}
}
void lmov(bool t) {
	deque<char> dq;
	l = rot(l, t);
	for (int i = 0; i < 3; i++) dq.push_back(u[i][0]);
	for (int i = 0; i < 3; i++) dq.push_back(f[i][0]);
	for (int i = 0; i < 3; i++) dq.push_back(d[i][0]);
	for (int i = 0; i < 3; i++) dq.push_back(b[2-i][2]);
	dq = cubing(dq, t);
	for (int i = 0; i < 3; i++) {
		u[i][0] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		f[i][0] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		d[i][0] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		b[2 - i][2] = dq.front();dq.pop_front();
	}
}
void rmov(bool t) {
	deque<char> dq;
	r = rot(r, t);
	for (int i = 0; i < 3; i++) dq.push_back(u[2-i][2]);
	for (int i = 0; i < 3; i++) dq.push_back(b[i][0]);
	for (int i = 0; i < 3; i++) dq.push_back(d[2 - i][2]);
	for (int i = 0; i < 3; i++) dq.push_back(f[2-i][2]);
	dq = cubing(dq, t);
	for (int i = 0; i < 3; i++) {
		u[2 - i][2] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		b[i][0] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		d[2 - i][2] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		f[2 - i][2] = dq.front();dq.pop_front();
	}
}
void umov(bool t) {
	deque<char> dq;
	u = rot(u, t);
	for (int i = 0; i < 3; i++) dq.push_back(b[0][2 - i]);
	for (int i = 0; i < 3; i++) dq.push_back(r[0][2 - i]);
	for (int i = 0; i < 3; i++) dq.push_back(f[0][2 - i]);
	for (int i = 0; i < 3; i++) dq.push_back(l[0][2 - i]);
	dq = cubing(dq, t);
	for (int i = 0; i < 3; i++) {
		b[0][2 - i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		r[0][2 - i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		f[0][2 - i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		l[0][2 - i] = dq.front();dq.pop_front();
	}
}
void dmov(bool t) {
	deque<char> dq;
	d = rot(d, t);
	for (int i = 0; i < 3; i++) dq.push_back(l[2][i]);
	for (int i = 0; i < 3; i++) dq.push_back(f[2][i]);
	for (int i = 0; i < 3; i++) dq.push_back(r[2][i]);
	for (int i = 0; i < 3; i++) dq.push_back(b[2][i]);
	dq = cubing(dq, t);
	for (int i = 0; i < 3; i++) {
		l[2][i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		f[2][i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		r[2][i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		b[2][i] = dq.front();dq.pop_front();
	}
}
void bmov(bool t) {
	deque<char> dq;
	b = rot(b, t);
	for (int i = 0; i < 3; i++) dq.push_back(u[0][2 - i]);
	for (int i = 0; i < 3; i++) dq.push_back(l[i][0]);
	for (int i = 0; i < 3; i++) dq.push_back(d[2][i]);
	for (int i = 0; i < 3; i++) dq.push_back(r[2-i][2]);
	dq = cubing(dq, t);
	for (int i = 0; i < 3; i++) {
		u[0][2 - i] = dq.front(); dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		l[i][0] = dq.front(); dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		d[2][i] = dq.front();dq.pop_front();
	}
	for (int i = 0; i < 3; i++) {
		r[2 - i][2] = dq.front();dq.pop_front();
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n; init();
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			bool time;
			if (s[1] == '+') time = 1; else time = 0;
			if (s[0] == 'U') umov(time);
			else if (s[0] == 'L') lmov(time);
			else if (s[0] == 'F') fmov(time);
			else if (s[0] == 'B') bmov(time);
			else if (s[0] == 'D') dmov(time);
			else rmov(time);
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) cout << u[i][j];
			cout << endl;
		}
	}
	return 0;
}