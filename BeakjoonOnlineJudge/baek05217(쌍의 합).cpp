#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	while (n--) {
		int t; cin >> t;
		cout << "Pairs for " << t << ": ";
		for (int i = 1; i <= t / 2; i++) 
			if (i != t - i) {
				cout << i << " " << t - i;
				if (i + 1 <= t / 2 && i+1 != t - i-1) cout << ", ";
			}
		cout << endl;
	}
	return 0;
}