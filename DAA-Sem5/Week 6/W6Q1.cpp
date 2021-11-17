#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

//optimize with pragma
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double lld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > odset;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds;

#define endl "\n"
#define tabl " "
#define mp make_pair
#define inf 1e18
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mem1(x) memset((x),-1,sizeof(x))
#define mem0(x) memset((x),0,sizeof(x))
#define vli vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define pli pair<ll,int>
#define all(x) (x).begin(),(x).end()
#ifndef ONLINE_JUDGE
#define deb(x)cerr<<#x<<" = ";_print(x);cerr<<endl
#else
#define deb(x) // No more TLEs
#endif 
#define deb2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<"="<<y<<endl
#define logarr(arr,a,b)    {cerr<<"[";for(int z=(a);z<=(b);z++) _print(arr[z]),cerr<<" ";cerr<<"]";}

//-----------------------------------------------------------------------------------------------------------------
//<<MATH ALGO>>
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size 3
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i*i<= n; i++)if (arr[i] == 0) { for (int j = 2 * i; j <= n; j += i)arr[j] = 1;}for(int i=2;i<=n;i++){if(arr[i]==0)vect.push_back(i);} return vect;}
vli phit(ll n){vector<ll> vect(n);vect[0]=0,vect[1]=1;for(ll i=2;i<=n;i++)vect[i]=i; for(ll i=2;i<=n;i++){if(vect[i]==i)for(ll j=i;j<=n;j+=i)vect[j]-=vect[j]/i;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll invmod(ll a,ll m,ll mo){ll res=1;while(m){if(m&1)res=mod_mul(a,res,mo);a=mod_mul(a,a,mo);m>>=1;}return res;}
template<class T> T mceil(T numerator ,T denominator){return (numerator+denominator-1)/denominator;}
//-------------------------------------------------------------------------------------------------------------
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector <T> v);
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void _print(odset v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//----------------------------------------------------------------------------------------------------------------
static const int N=1e5+10;
static const ll mod=1e9+7;

// should be disjoint in both forest

struct unionfind {
  vi par;
  vi height;
  vi siz;
  unionfind(int size_) : par(size_+1), height(size_+1, 0), siz(size_+1, 1) {
    for (int i = 1; i <= size_; ++i) par[i] = i;
  } 
  void init(int size_) {
    par.resize(size_);
    siz.resize(size_, 1);
    for (int i = 1; i <= size_; ++i) par[i] = i;
  }
  int finde(int x) {
    if (par[x] == x) return x;
    return par[x] = finde(par[x]);
  }
  void unite(int x, int y) {
    x = finde(x);
    y = finde(y);
    if (x == y) return;
    if(siz[y]>siz[x])swap(x,y);
    siz[x]+=siz[y];
    par[y]=x;    
  }
  bool same(int x, int y) {
    return finde(x) == finde(y);
  }
};
void solve(int ttc){
  int n,m1,m2;
  cin>>n>>m1>>m2;
  unionfind dsu1(n),dsu2(n);
  while(m1--){
    int x,y;
    cin>>x>>y;
    dsu1.unite(x,y);
  } 
  while(m2--){
    int x,y;
    cin>>x>>y;
    dsu2.unite(x,y);
  }
  vector<pii>ans;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      if(!dsu1.same(i,j) and !dsu2.same(i,j)){
        ans.pb({i,j});
        dsu1.unite(i,j);
        dsu2.unite(i,j);
      }
    }
  }
  cout<<ans.size()<<endl;
  for(auto ae:ans)
    cout<<ae.ff<<" "<<ae.ss<<endl;
}
int main(){
    clock_t begin_69 = clock();
    fast_io;
    //write here
    int test_cases=1;
    // cin>>test_cases;////-\/-
    cout<<fixed<<setprecision(12);
    for(int ttc=1;ttc<=test_cases;ttc++)
    {
    solve(ttc);
    }
//-----------------------------------------------------------------------------------------------------------------------------//
#ifndef ONLINE_JUDGE
    
          clock_t terminator_69 = clock();
          cerr<<"\n\nExecuted In: "<<double(terminator_69 - begin_69) / CLOCKS_PER_SEC*1000<<" ms"<<endl;
#endif        
}
