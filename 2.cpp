#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>
#include <utility>
#include <tuple>
#include <functional>
#include <memory>
#include <new>
#include <exception>
#include <stdexcept>
#include <cassert>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <chrono>
#include <random>
#include <cmath>
#include <complex>
#include <iomanip>
#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <climits>
#include <cfloat>
#include <cassert>
#include <bits/stdc++.h>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define ll long long
#define modulo (1000000000+7)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define per(i,a,b) for(ll i=a;i>b;i--)
#define vll(v,n) vector<ll> v(n);
#define vll0(v,n) vector<ll> v(n,0);
#define vllk(v,n,k) vector<ll> v(n,k);
#define vlll vector<vector<ll>>
#define vl vector<ll>
#define vlll0(v,n,m) vector<vector<ll>> v(n,vector<ll>(m,0));
#define qll queue<ll>
#define dqll deque<ll>
#define stll set<ll>
#define mpll map<ll,ll>
#define pqll priority_queue<ll>
#define pqlp priority_queue<ll,vector<ll>,greater<ll>>
#define pii pair<ll,ll>
#define vb vector<bool>
#define ump unordered_map
#define ust unordered_set
#define mset(x,a) memset(x,a,sizeof(x)) 
#define rd(x) ll x;cin>>x;
#define rds(x) cin>>x;
#define pt(x) cout<<x;
#define nl cout<<endl;
#define yes pt("YES") nl
#define no pt("NO") nl
#define rdvec(v,n) rep(i,0,n){rds(v[i])}
#define rdmat(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){rds(a[i][j])}}
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define pb push_back
#define pob pop_back
#define pof pop_front
#define emp emplace
#define emb emplace_back
#define emf emplace_front
#define sz(x) (ll)x.size()
#define ist insert
#define mkp(x, y) make_pair(x, y)
#define mkt(x, y, z) make_tuple(x, y, z)
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define fst first
#define sec second
#define acc(a) accumulate(all(a),0ll)
#define maxi(a) *max_element(all(a))
#define mini(a) *min_element(all(a))
#define sortr(a) sort(allr(a))
#define bitcnt(x) __builtin_popcountll(x)
#define ispow2(x) (!(x & (x - 1)) && x)
#define lsb(x) (x & -x)
#define msb(x) (63 - __builtin_clzll(x))
#define clz(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctzll(x)
#define dist(x1,y1,x2,y2) sqrt(sq(x1-x2) + sq(y1-y2))
#define ptvec(a) for(auto &x:a) {cout<<x<<" ";} nl;
#define ptmat(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<" ";}nl}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ll gcd_(ll a, ll b) {return b == 0 ? a : gcd_(b,a%b);}
ll lcm_(ll a, ll b) {return (a/gcd_(a,b))*b;}
ll pow_(ll a, ll b) {ll result=1; ll base=a%modulo; while (b>0) {if(b%2==1) result=(result*base)%modulo;b=b>>1;base=(base*base)%modulo;} return result;}
ll ncr_(ll n, ll r) {return (n<r) ? -1 : (r==0) ? 1 : ncr_(n-1,r-1) * n/r;}
ll mod_exp(ll base, ll exp, ll mod) {ll result = 1; base = base%mod; while(exp>0) {if (exp%2==1) result=(result*base)%mod; exp=exp>>1; base=(base*base)% mod;} return result;}
bool isprime(ll n) {if (n <= 1) return false; if(n<=3) return true; if(n%2==0 || n%3==0) return false;for(ll i=5;i*i<=n;i+=6) {if(n%i==0 || n%(i+2)==0) return false;} return true;}
ll factorial(ll n) {ll fact=1; for(ll i=2;i<=n;++i) fact*=i; return fact;}
ll mod_add(ll a, ll b, ll mod) {return (a % mod + b % mod) % mod;}
ll mod_mul(ll a, ll b, ll mod) {return (a % mod * b % mod) % mod;}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<typename T> void __print_ll(T x) { cerr << x; }
template<typename T> void __print_double(T x) { cerr << x; }
template<typename T> void __print_long_double(T x) { cerr << x; }
template<typename T> void __print_char(T x) { cerr << "'" << x << "'"; }
template<typename T> void __print_string(const T* x) { cerr << "\"" << x << "\""; }
template<typename T> void __print_bool(T x) { cerr << (x ? "True" : "False"); }
template<typename T> void __print_vector_ll(vector<T>& arr) { for (T x : arr) cerr << x << " "; cerr << "\n"; }
template<typename T> void __print_set_ll(vector<T>& arr) { for (T x : arr) cerr << x << " "; cerr << "\n"; }
template<typename T1, typename T2> void __print_pair(const pair<T1, T2>& p) { cerr << "{" << p.first << ", " << p.second << "}"; }
template<typename T1, typename T2> void __print_map(const map<T1, T2>& m) { for (auto& kv : m) __print_pair(kv), cerr << " "; cerr << "\n"; }
template<typename T> void __print_vector(const vector<T>& v) { cerr << "[ "; for (const T& x : v) __print(x), cerr << " "; cerr << "]"; }
template<typename T> void __print_set(const set<T>& s) { cerr << "{ "; for (const T& x : s) __print(x), cerr << " "; cerr << "}"; }
template<typename T> void __print_multiset(const multiset<T>& ms) { cerr << "{ "; for (const T& x : ms) __print(x), cerr << " "; cerr << "}"; }
template<typename... T> void __print_tuple(const tuple<T...>& t) { cerr << "("; apply([](auto&&... args) { ((cerr << args << ", "), ...); }, t); cerr << ")"; }
template<typename T> void __print_deque(const deque<T>& d) { cerr << "[ "; for (const T& x : d) __print(x), cerr << " "; cerr << "]"; }
template<typename T1, typename T2> void __print_unordered_map(const unordered_map<T1, T2>& um) { for (auto& kv : um) __print_pair(kv), cerr << " "; cerr << "\n"; }
template<typename T> void __print_unordered_set(const unordered_set<T>& us) { cerr << "{ "; for (const T& x : us) __print(x), cerr << " "; cerr << "}"; }
template<typename T, size_t N> void __print_array(const T (&arr)[N]) { cerr << "[ "; for (size_t i = 0; i < N; ++i) __print(arr[i]), cerr << ", "; cerr << " ]"; }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main_() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("prime_subtractorization_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    rd(T)
    vll(tcs,T)
    ll maxN=0;
    for(auto &x:tcs) {rds(x); maxN = max(maxN,x);}
    vector<bool> prm(maxN+3,true);
    prm[0]=prm[1]=false;
    for(int i=2;i*i<=maxN+2;i++) if(prm[i]){
        for(int j=i*i;j<=maxN+2;j+=i) prm[j]=false;
    }
    vll0(pref,maxN+3);
    rep(i,2,maxN-1) pref[i] = pref[i-1] + (prm[i] && prm[i+2] ?1:0);
    rep(tc,1,T+1){
        ll N = tcs[tc-1];
        ll twin = (N >=5) ? (pref[N-2]) : 0;
        ll count = twin + (twin >=1 ?1:0);
        pt("Case #") pt(tc) pt(": ") pt(count) nl
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*This is code from nor's blog present on codeforces. This helps in avoiding stack size issue.*/

static void run_with_stack_size(void (*func)(void), size_t stsize) {
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize - 16;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %%rsp, (%0)\n"
        "mov %0, %%rsp\n"
        :
        : "r"(send));
    func();
    asm volatile("mov (%0), %%rsp\n" : : "r"(send));
    free(stack);
}
int main() {
    run_with_stack_size(main_, 1024 * 1024 * 1024); // run with a 1 GiB stack
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

