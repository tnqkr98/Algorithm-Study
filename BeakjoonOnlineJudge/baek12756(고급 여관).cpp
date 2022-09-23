#include <iostream>
using namespace std;
int main() {
	int aa, ah; cin >> aa >> ah;
	int ba, bh; cin >> ba >> bh;
	while (1) {
		ah -= ba;
		bh -= aa;
		if (ah < 0 && bh < 0) {
			cout << "DRAW";
			break;
		}
		else if(ah<0) {
			cout << "PLAYER B";
			break;
		}
		else if (bh < 0) {
			cout << "PLAYER A";
			break;
		}
	}

	return 0;
}