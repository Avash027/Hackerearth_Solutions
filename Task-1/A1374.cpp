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
#define w(t) int t; cin>>t; while (t--) { solve(); }
#define N 1000001

using namespace std;

//Debug template
void __print(int x) {cerr << x;} void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifdef Avash_Local_Machine
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
//Debug template ends

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


void solve()
{
	int x, y, n;
	cin >> x >> y >> n;
	cout << ((n - y) / x)*x + y << "\n";
}

int32_t main()
{

	fastio
	// w1
	w(t)

	return 0;
}