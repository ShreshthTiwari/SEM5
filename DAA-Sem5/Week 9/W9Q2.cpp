// <------------------------------------- Headers Files ------------------------------------->
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// <------------------------------------- Directives ------------------------------------->
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define vll vector<vector<ll>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define pii pair<int, int>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define tab1 " "
#define lb lower_bound
#define up upper_bound
#define vvi vector<vector<int>>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, b, a) for(int i = b - 1; i >= a; i--)
#define fbo find_by_order
#define oof order_of_key
#define all(a) a.begin(), a.end()

using namespace std;
using namespace __gnu_pbds;

// <------------------------------------- Templates ------------------------------------->
template <class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class K, class V> using omap = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

template <class T> void _print(T arg) { cerr << arg << endl; }

template <class T> void _print(vector<T> &a) { for(auto &it: a) { cerr << it << tab1; }cerr << endl; }

// <------------------------------------- Code ------------------------------------->

const int N = 1e5 + 10;
const int mod = 1e9;

int n;
vvi a;
int wt;

int main() {
    clock_t begin_69 = clock();
    fast_io;

    cin >> n;
    a = vvi(n + 1, vi(3));
    rep(i, 1, n + 1) cin >> a[i][0];
    rep(i, 1, n + 1) cin >> a[i][1], a[i][2] = i;
    cin >> wt;

    sort(all(a), [&](vi x, vi y) {
    	return (float)x[1] / x[0] > (float)y[1] / y[0];
    });

    float ans = 0;
    vector<pii> selected_item;
    rep(i, 1, n + 1) {
    	if(a[i][0] <= wt) {
    		ans += a[i][1];
    		wt -= a[i][0];
    		selected_item.pb({a[i][2], a[i][0]});
    	}else {
    		float vpw = (float)a[i][1] / a[i][0];
    		ans += (vpw * wt);
    		selected_item.pb({i, wt});
    		wt = 0;
    		break;
    	}
    }

    cout << "Maximum value : " << fixed << setprecision(4) << ans << endl;
    cout << "item-weight : " << endl;
    for(auto &it: selected_item) {
    	cout << it.ff << "-" << it.ss << endl;
    }
    
    #ifndef ONLINE_JUDGE
          clock_t terminator_69 = clock();
          cerr << "\nExecuted In: " << double(terminator_69 - begin_69) / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    #endif 
    return 0;
}
