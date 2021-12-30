#include <iostream>
using namespace std;
int main() {
	int arr[7] = {0}, a, b, c, max = 0;
	cin >> a >> b >> c;
	arr[a]++;
	if (a > max)max = a;
	arr[b]++;
	if (b > max)max = b;
	arr[c]++;
	if (c > max)max = c;
	if (arr[a] == 3) cout << 10000 + a * 1000;
	else if(arr[b] == 3) cout << 10000 + b * 1000;
	else if(arr[c] == 3) cout << 10000 +c * 1000;
	else if(arr[a] == 2) cout << 1000 + a * 100;
	else if(arr[b] == 2) cout << 1000 + b * 100;
	else if(arr[c] == 2) cout << 1000+ c * 100;
	else cout << max * 100;


	return 0;
}