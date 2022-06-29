#include <iostream>
using namespace std;
int main() {
	int n = 1;
	while (1) {
		char c[1000000];
		cin.getline(c,sizeof(c));
		if (c[0] == '0')break;
		cout << "Case " << n++ << ": Sorting... done!" << endl;
	}
	return 0;
}