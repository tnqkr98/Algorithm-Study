#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x3, y3, x4, y4;
	cin >> x3 >> y3 >> x4 >> y4;
	vector<int> x,y;
	x.push_back(x1);
	x.push_back(x2);
	x.push_back(x3);
	x.push_back(x4);
	y.push_back(y1);
	y.push_back(y2);
	y.push_back(y3);
	y.push_back(y4);
	int dx, dy;
	dx = *max_element(x.begin(), x.end()) - *min_element(x.begin(),x.end());
	dy = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
	if (dx > dy) cout << dx * dx;
	else cout << dy * dy;
	return 0;
}