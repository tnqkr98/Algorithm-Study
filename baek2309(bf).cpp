// https://www.acmicpc.net/problem/2309
// 백준 2309번 - 일곱 난쟁이
// 관련 알고리즘 : Brute Force

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int arr[9], check[9] = { 0 }, i, j, k, sum = 0, br = 0;
	vector<int> v;
	for (i = 0; i < 9; i++) 
		cin >> arr[i];
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			check[i] = 1;
			check[j] = 1;
			for (k = 0; k < 9; k++)
				if (!check[k])
					sum += arr[k];
			if (sum == 100){
				br = 1;
				break;
			}
			sum = 0;
			check[i] = 0;
			check[j] = 0;
		}
		if (br)
			break;
	}
	for (i = 0; i < 9; i++)
		if (!check[i])
			v.push_back(arr[i]);
	sort(v.begin(), v.end());
	for (i = 0; i < 7; i++)
		cout << v[i] << endl;
	return 0;
}