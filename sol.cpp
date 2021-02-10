#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
 	long long n, k, t;
 	cin >> n >> k >> t;
 	// view the image in this repository for better understanding
 	if (t < k) {
 		// if the time is less then 'k', then print the time itself
 		cout << t;
 	} else if (t >= k && t <= n) {
 		// if the time is between 'k' and 'n' inclusive, then print 'k'
 		cout << k;
 	} else {
 		// if the time is greater than 'n', then print the sum of "n + k" spectators minus the time
 		cout << (n + k) - t;
 	}
 	cout << '\n';
 	return 0;
}      