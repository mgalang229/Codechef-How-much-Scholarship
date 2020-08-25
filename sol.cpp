#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r;
	cin >> r;
	if (r >= 1 && r <= 50) {
		cout << 100;
	} else if (r >= 51 && r <= 100) {
		cout << 50;
	} else {
		cout << 0;
	}
	cout << '\n';
}
