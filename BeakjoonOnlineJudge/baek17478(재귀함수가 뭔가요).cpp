#include <iostream>
#include <string>
using namespace std;
int n;
void recur(int k) {
	string bar = "";
	for (int i = 0; i < n - k; i++) 
		bar += "____";
	cout << bar + "\"����Լ��� ������?\"" << endl;
	if (k != 0) {
		cout << bar + "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
		cout << bar + "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
		cout << bar + "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
	}
	else {
		cout <<bar+ "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;;
		cout << bar + "��� �亯�Ͽ���." << endl;
		return;
	}
	recur(k - 1);
	cout << bar + "��� �亯�Ͽ���." << endl;
}
int main() {
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������."<<endl;
	recur(n);
	return 0;
}