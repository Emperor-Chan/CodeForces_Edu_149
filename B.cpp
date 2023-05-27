#include <iostream>
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n,c=1,mc=0;
		cin >> n;
		string a;
		cin >> a;
		int k = a[0];
		for (int j = 1; j < a.length(); j++) {
			if (a[j] == k) {
				c++;
			}
			else {
				mc = max(mc, c);
				c = 1;
				k = a[j];
			}
		}
		mc = max(mc, c);
		cout << mc + 1 << '\n';
	}
 
	return 0;
}
