/* Given a directed graph, design an algorithm and implement it using a program to find whether
cycle exists in the graph or not.
*/

#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pi pair<int, int>
#define vvi vector<vector<int>>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, b, a) for(int i = b - 1; i >= a; i--)

using namespace std;

vvi adj;
vi vis;

bool isCycle(int node) {
    vis[node] = 1;

    rep(i, 1, adj[node].size()) {
        if(adj[node][i]) {
            if(vis[i] || isCycle(i)) {
                return true;
            }
        }
    }
    vis[node] = 0;
    return false;
}

int main() {
    int n; cin >> n; n++;
    adj = vvi(n, vi(n, 0));
    vis = vi(n, 0);

    rep(i, 1, n) {
        rep(j, 1, n) {
            cin >> adj[i][j];
        }
    }
    
    bool f = false;
    rep(i, 1, n) {
        if(isCycle(i)) {
            f = true;
            break;
        }
    }

    if(f) {
        cout << "Yes Cycle Exists" << endl;
    }else {
        cout << "No Cycle Exists" << endl;
    }
    return 0;
}
