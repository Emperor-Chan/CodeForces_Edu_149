#include <iostream>
#include <vector>
 
using namespace std;
 
vector<char>ans(300001);
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string a;
		
		cin >> a;
		int t = 0;
		while (t < a.length() && a[t] == '?')t++;
		if (t == a.length()) {
			for (int k = 0; k < a.length(); k++) {
				cout << '1';
			}
		}
		else {
			for (int k = 0; k < t; k++) {
				ans[k] = a[t];
			}
			for (int k = t; k < a.length(); k++) {
				if (a[k] == '?') {
					while (k < a.length() && a[k] == '?') k++;
					for (int j = t; j < k; j++) ans[j] = a[t];
					k--;
				}
				else {
					ans[k] = a[k];
					t = k;
				}
			}
			for (int k = 0; k < a.length(); k++) cout << ans[k];
		}
		cout << '\n';
	}
 
	return 0;
}
