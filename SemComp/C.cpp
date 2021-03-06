#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
// By: mende1

#define endl "\n"
#define int ll
#define cini(n) int n; cin >> n;
#define fori(x, n) for(int i=x; i<=n; i++)
#define forj(x, n) for(int j=x; j<=n; j++)
#define fork(x, n) for(int k=x; k<=n; k++)

void solve() {
	// -------------------------------------------

	int n;
	cin >> n;

	bool door[n+1] = { false };

	for (int i=1; i<=n; i++) {
		for (int j=i; j<=n; j += i) {
			door[j] = !door[j];
		}
	}

	int ans = 0;
	for (int i=1; i<=n; i++) {
		if (door[i]) {
			ans += 1;
		}
	}

	cout << ans << endl;

	// -------------------------------------------
}

int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// cini(t);
	int t=1;

	while(t--) {
		solve();
	}
}
