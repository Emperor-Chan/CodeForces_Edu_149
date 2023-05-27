#include <iostream>
#include <vector>
 
using namespace std;
 
int ans[300001];
int l, r;
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		l = 0, r = 0;
		int n;
		string a;
		cin >> n;
		cin >> a;
		for (auto i : a) {
			if (i == '(') l++;
			else r++;
		}
		if (l != r) cout << -1 << '\n';
		else {
			l = 0, r = 0;
			int b = 0, c = 0;
			for (int i = 0; i < a.length(); i++) {
				if (a[i] == '(')l++;
				else l--;
				if (l > 0) {
					b = 1;
					ans[i] = 1;
				}
				else if (!l && a[i] == ')') {
					b = 1;
					ans[i] = 1;
				}
				else {
					c = 1;
					ans[i] = 2;
				}
				if (b && c) r = 2;
			}
			if (r == 2) {
				cout << 2 << '\n';
				for (int i = 0; i < n; i++) cout << ans[i] << ' ';
			}
			else {
				cout << 1 << '\n';
				for (int i = 0; i < n; i++) cout << 1 << ' ';
			}
			cout << '\n';
		}
	}
 
	return 0;
}
