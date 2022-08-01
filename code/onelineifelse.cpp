#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
	    int x, y;
	    cin >> x >> y;
	    x >= y ? cout << "YES" : cout << "NO";
        //? means check prev condition, : means if not then otherwise
	    cout << '\n';
	}
	return 0;
}