#include <iostream>
using namespace std;
char arr[50];
int n;
int cntpair() {
	int res = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] == 'A' && arr[j] == 'B')
				res++;
	return res;
}
int main() {
	int k,cur=0; cin >> n >> k;
	int front = 0, last = n - 1;
	for (int i = 0; i < n; i++) arr[i] = 'B';
	if (k == 0) {
		cout << "B";
		for (int i = 1; i < n; i++) cout << "A";
	}
	else {
		while (cur != k && front < n) {
			arr[front] = 'A';
			int predict = cntpair();
			if (predict > k)
				arr[front++] = 'B';
			else if (predict == k) {
				for (int i = 0; i < n; i++)cout << arr[i];
				break;
			}
			else arr[front++] = 'A';
			cur = cntpair();
		}
		if(cntpair() != k)
			cout << -1;
	}
	return 0;
}