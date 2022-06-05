#include <iostream>
using namespace std;
int main() {
	int n,arr[101],c=0; cin >> n;
	for (int i = 0; i < n; i ++ ) 
		cin >> arr[i];
	int v; cin >> v;
	for (int i = 0; i < n; i++)
		if (arr[i] == v) c++;
	cout << c;

	return 0;
}