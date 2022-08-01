#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
	    vector<int> a(3);
	    for (int i = 0; i < 3; ++i) {
	        cin >> a[i];
	    }
	    cout << *max_element(a.begin(), a.end()) << '\n';
	}
	return 0;
}