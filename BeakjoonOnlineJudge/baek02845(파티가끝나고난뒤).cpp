#include <iostream>

using namespace std;
int main(){
	int l, p,t;
	cin >> l >> p;
	for (int i = 0; i < 5; i++) {
		cin >> t;
		cout << t - l * p << " ";
	}

	return 0;
}