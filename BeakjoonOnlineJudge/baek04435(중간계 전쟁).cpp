#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	for(int j=1;j<=t;j++){
		int g = 0, s = 0;
		int ga[6] = { 1,2,3,3,4,10 };
		int sa[7] = { 1,2,2,2,3,5,10 };
		for (int i = 0; i < 6; i++) {
			int a; cin >> a;
			g += a*ga[i];
		}
		for (int i = 0; i < 7; i++) {
			int a; cin >> a;
			s += a*sa[i];
		}
		cout<<"Battle "<<j<<": ";
		if (g > s)
			cout << "Good triumphs over Evil" << endl;
		else if (g < s)
			cout << "Evil eradicates all trace of Good" << endl;
		else
			cout << "No victor on this battle field" << endl;
	}
	return 0;
}