/**
 *      author : azhar556
 *      9 October 2018   5:28 PM (+7)
**/

#include <bits/stdc++.h>
#define PI 3.14159265
#define rep(a,b,c) for(int a=b; a<c; a++)
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

using namespace std;

typedef double db;
typedef long long i64;

const long long MAX = 1e9 + 1;

void solve() {
	int n;
	cin >> n;
	int num = n, a2 = 0;
	for (int a = 0; a < (n * 2) + 1; a++) {
		for (int b = 0; b < num * 2; b++) {
			cout << ' ';
		}
		int b2 = 0;
		for (int b = 0; b < (a2 * 2) + 1; b++) {
			if (b == a2 * 2) cout << 0;
			else cout << b2 << ' ';
			if (b < a2) b2++;
			else b2--;
		}
		cout << '\n';
		if (a < n) {
			num--;
			a2++;
		} else {
			num++;
			a2--;
		}
	}
}

int main()
{
	solve();
	
	cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
	return 0;
}
