/* Given a graph, design an algorithm and implement it using a program to find if a graph is
bipartite or not. (Hint: use BFS)
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
vi col;

bool isBipartite(int node, int c = 0) {
    if(col[node] != -1 && col[node] != c) {
        return false;
    }
    if(col[node] == c) {
        return true;
    }
    col[node] = c;

    rep(i, 1, adj[node].size()) {
        if(adj[node][i]) {
            if(!isBipartite(i, (c xor 1))) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n; cin >> n; n++;
    adj = vvi(n, vi(n, 0));
    col = vi(n, -1);

    rep(i, 1, n) {
        rep(j, 1, n) {
            cin >> adj[i][j];
        }
    }

    bool f = true;
    rep(i, 1, n) {
        if(!isBipartite(i)) {
            f = false;
            break;
        }
    }

    if(f) {
        cout << "Yes Bipartite" << endl;
    }else {
        cout << "Not Bipartite" << endl;
    }
    
    return 0;
}
