#include<bits/stdc++.h>

using namespace std;

#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define vb vector<bool>
#define mp make_pair
#define pb push_back
#define all(_) (_).begin(), (_).end()
#define fl(i, l, r) for (int i = l; i < r; ++i)
#define flr(i, l, r) for (int i = l; i >= r; --i)
#define fastio()                   \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define gcout(i) cout << "Case #" << i << ": "

typedef long long ll;
ll mod = 1000000007;
ll mod1 = 998244353;
ll inf = 1e18 + 5;

/*****************************************************************/ /*****************************************************************/
// ll gcd(ll a, ll b){if (b > a){return gcd(b, a);}if (b == 0){return a;}return gcd(b, a % b);}
// ll powerMod(ll a, ll b, ll mod){ll res = 1;while (b > 0){if (b & 1)res = (res * a) % mod;a = (a * a) % mod;b = b >> 1;}return res;}
// ll power(ll a, ll b){ll res = 1;while (b > 0){if (b & 1)res = (res * a);a = (a * a);b = b >> 1;}return res;}
// void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
// ll mmi(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
// ll mmiprime(ll a, ll b) { return powerMod(a, b - 2, b); }
// ll logarithm(ll num){ll cnt = 0;bool forCeil = false;while(num>1){if(num&1)forCeil = true;num/=2;cnt++;}return (cnt+forCeil);}
/****************************************************************/ /****************************************************************/

void solve_tc(int t)
{   
    int ans = 2;
    gcout(t) << ans << endl;
}

signed main()
{
    fastio();

    int t = 1;
    cin >> t;

    int i;
    fl(i, 1, t + 1)
    {
        solve_tc(i);
    }

    return 0;
}