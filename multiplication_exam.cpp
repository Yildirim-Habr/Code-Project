/**
 *      author : azhar556
 *      30 November 2018   2:45 AM (+7)
**/

#include <bits/stdc++.h>
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
using namespace std;

typedef double db;
typedef long long i64;

const int N9 = 1e9 + 7;
const int N5 = 1e5 + 5;
const db PI = acos(-1);

int n, res, possz, k, Max, dif, Sum, sumdif, x, y;
bool ok, plus;
string s, alp;

//int a[];
vector<int> a(N5), fs, vsumdif;
//map<int, int> seq;

void solve() {
    srand(time(NULL));
    
    int time = 10;
    while (time--) {
        x = rand() % 10 + 1;
        y = rand() % 3 + 1;
        
        cout << x << " x " << y << " = \n";
        
        int ans;
        cin >> ans;
        
        if (ans == x * y) 
            cout << " CORRECT..!!\n";
        else
            cout << " WRONG.. (" << x * y << ")\n";
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	solve();	
	
	cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
	return 0;
}
