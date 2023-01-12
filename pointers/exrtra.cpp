#define ll long long
#define sq(a) (a) * (a)
#define MAX 1e9
#define MIN -1e9
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define lld long double
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define ff first
#define ss second
#define mp make_pair
#define FAST                     \
    ios::sync_with_stdio(false); \
    cout.tie(0);                 \
    cin.tie(0)
#define AND &&
#define OR ||
#define ROUND(x) round(x) // mathematically correct rounding, that is, to the nearest integer
#define CEIL(x) ceil(x)   // towards more
#define FLOOR(x) floor(x) // towards less
#define TRUNC(x) trunc(x) // removes the fractional part
#define all(v) v.begin(), v.end()
//--------------------------macros------------------------------/
#define ALL(x) x.begin(), x.end()
#define sz(x) ((ll)x.size())
#define soort(x) sort(ALL(x))
#define soortR(x) sort(x.rbegin(), x.rend())
#define rev(x) reverse(ALL(x))
#define mx_all(x) *max_element(ALL(x))
#define mn_all(x) *min_element(ALL(x)) xx
#define sum_all(x) accumulate(ALL(x), 0ll);
#define see(x) cout << x;
#define mxn 100005
#define LIMIT 1000000
#define Take(X)          \
    for (auto &it : (X)) \
        cin >> it;
#define TakeWithSum(X, S) \
    for (auto &it : (X))  \
        cin >> it, (S) += it;
#define Out(X)           \
    for (auto &it : (X)) \
        cout << it << " ";
//---------------------------------------------------------------/
//--------------------------loops--------------------------------/
#define fi(n) for (ll i = 0; i < n; ++i)
#define rfi(n) for (ll i = n - 1; i >= 0; --i)
#define fj(n) for (ll j = 0; j < n; ++j)
#define fi1(n) for (ll i = 1; i < n; ++i)
#define fl(i, l, r) for (ll i = l; i < r; i++)
//---------------------------------------------------------------/
ll sum(ll n){
    return (n*(n+1))/2 ;
}