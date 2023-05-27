#include <iostream>
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		if (n % m == 0) {
			cout << 2 << '\n';
			cout << n - 1 << ' ' << 1 << '\n';
		}
		else {
			cout << 1 << '\n';
			cout << n << '\n';
		}
	}
 
	return 0;
}
