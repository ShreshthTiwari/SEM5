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
const int INF = 1e9;

int n;
vvi adj;

int main() {
    clock_t begin_69 = clock();
    fast_io;

    cin >> n;
    adj = vvi(n + 1, vi(n + 1, INF));

    rep(i, 1, n + 1) {
    	rep(j, 1, n + 1) {
    		string a; cin >> a;
    		if(a != "INF") {
    			adj[i][j] = stoi(a);
    		}
    	}
    }

    vvi dis = adj;

    rep(k, 1, n + 1) {
    	rep(i, 1, n + 1) {
    		rep(j, 1, n + 1) {
    			dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
    		}
    	}
    }
    cout << "Shortest Distance Matrix:" << endl;
    rep(i, 1, n + 1) {
    	rep(j, 1, n + 1) {
    		if(dis[i][j] >= INF) cout << "INF ";
    		else cout << dis[i][j] << tab1;
    	}cout << endl;
    }
    
    #ifndef ONLINE_JUDGE
          clock_t terminator_69 = clock();
          cerr << "\nExecuted In: " << double(terminator_69 - begin_69) / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    #endif 
    return 0;
}
