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

int n, sc;
vvi adj;

int solve() {
    vector<bool> vis(n + 1, 0);
    multiset<pii> s;

    vi dis(n + 1, N);

    dis[1] = 0;
    vis[1] = 1;
    rep(i, 1, n + 1) {
        if(adj[1][i] && !vis[i] && adj[1][i] < dis[i]) {
            s.insert(mp(adj[1][i], i));
            dis[i] = adj[1][i];
        }
    }

    int roads = n - 1;
    int cost = 0;

    while(roads--) {
        pii p = *(s.begin());
        s.erase(p);
        vis[p.ss] = 1;
        cost += p.ff;

        rep(i, 1, n + 1) {
            if(adj[p.ss][i] && !vis[i] && adj[p.ss][i] < dis[i]) {
                s.erase({dis[i], i});
                s.insert(mp(adj[p.ss][i], i));
                dis[i] = adj[p.ss][i];
            }
        }

    }
    return cost;
}

int main() {
    clock_t begin_69 = clock();
    fast_io;

    cin >> n;
    adj = vvi(n + 1, vi(n + 1));

    rep(i, 1, n + 1) {
        rep(j, 1, n + 1) {
            cin >> adj[i][j];
        }
    }

    cout << "Minimum Spanning Weight: " << solve() << endl;

    
    #ifndef ONLINE_JUDGE
          clock_t terminator_69 = clock();
          cerr << "\nExecuted In: " << double(terminator_69 - begin_69) / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    #endif 
    return 0;
}
