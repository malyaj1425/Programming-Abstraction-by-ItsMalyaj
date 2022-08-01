#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
	    int a, b;
	    cin >> a >> b;
	    vector<int> arr{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	    int sum = a + b;
	    int cnt = 0;
	    while (sum) {
	        int rem = sum % 10;
	        cnt += arr[rem];
	        sum /= 10;
	    }
	    cout << cnt << '\n';
	}
	return 0;
}