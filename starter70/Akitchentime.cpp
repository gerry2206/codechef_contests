#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
// Gobardhan Meher

void solve() {
	int x, y; cin >> x >> y;
	cout << y - x << nline;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++) {
		solve();
	}
	
	return 0;
}

