#include <iostream>
#include <string>
#include <memory.h>
#define MIN(a,b) (((a)>(b))?(b):(a))
using namespace std;
int n,mmin=401;
void func(int coin[],int r) {
	int total = 0;
	if (r == n) {	// ��� �࿡ ���� ���� or �ȵ��� ���ೡ�� �������(row���� ���� ����)
		for (int i = 0; i < n; i++) {  // �� ���� �����ذ���, �����°� �̵����� �ƴ��� �Ǵ�
			int tcnt = 0;
			for (int j = 0; j < n; j++)  // ���� ��ȸ�ϱ� ���� ����
				if (coin[j] & (1 << i)) 	// i��° ��Ʈ�� 1(=T)���� Ȯ��
					tcnt++;		
			//���⼭ ���� t������ ����
			total += MIN(tcnt, n - tcnt); // �ش� ���� �����°� �̵����� �ȵ����°� �̵����� Ȯ���Ͽ� �̵��ΰ� ����
		}
		if (total < mmin)	//���������� ������ �̹� ����� ����� t������ ��ü �ּҺ��� ������ Ȯ��
			mmin = total;
		return;
	}

	func(coin, r+1);
	coin[r] = ~coin[r];
	func(coin, r+1);
} 

int main() {
	int coin[21] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int num = 1;
		cin >> s;
		// ��Ʈ����ŷ
		for (int j = n-1; j >=0; j--) {
			if(s[j] == 'T') coin[i] += num;
			num *= 2;
		}
	}
	func(coin, 0);
	cout << mmin;
	return 0;
}