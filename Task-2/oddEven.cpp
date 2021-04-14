#include <bits/stdc++.h>
#define int long long
#define f(i,a,n) for (int i = a; i < n; ++i)
#define f1(i,a,n) for(int i=n-1;i>=a;i--)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define w1 solve();
#define mod (int)(1e9 + 7)
#define prq priority_queue
#define gcd __gcd
#define sz(x) (int)x.size()
#define w(t) int t; cin>>t; while(t--) solve();
#define N 200005

using namespace std;
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")



#ifdef Avash_Local_Machine
#include "debug.h"
#else
#define debug(x...)
#endif

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
typedef vector<string> vs;
typedef vector<char> vc;

const int INF = (int)(1e17);
const double PI = 3.141592653589793;

int dx[4] = { -1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
string path = "URDL";


void solve() {
	int a;
	cin >> a;
	cout << ((a & 1) ? "odd" : "even") << "\n";

}


int32_t main()
{

	fastio

	w(t)

	return 0;
}