#include <ctype.h>
#include <cstring>
#include <map>
#include <chrono>
#include <unordered_map>
#include <stdio.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <climits>
#include <cstdint>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <deque>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef std::vector<int> vi;
typedef std::vector<bool> vb;
typedef std::vector<string> vs;
typedef std::vector<double> vd;
typedef std::vector<long long> vll;
typedef std::vector<std::vector<int> > vvi;
typedef vector<vll> vvll;
typedef std::vector<std::pair<int, int> > vpi;
typedef vector<vpi> vvpi;
typedef std::pair<int, int> pi;
typedef std::pair<ll, ll> pll;
typedef std::vector<pll> vpll;
 
const long long mod = 1000000007;
ll gcd (ll a, ll b) {return b==0 ? a : gcd(b, a%b);}
const unsigned gen_seed = std::chrono::system_clock::now().time_since_epoch().count();
std::mt19937_64 gen(gen_seed);
# define fast_io ios::sync_with_stdio(0); cin.tie(0);

#define ALL(x) (x).begin(), (x).end()
#define srt(c) sort(ALL(c))
#define srtrev(c) sort(ALL(c)); reverse(ALL(c))
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define LP(n) for (int i=0; i<n; i++)
#define R_FOR(i, a) for(int i = a; i >= 0; i--)
#define read(x) ll x; scanf("%lld", &x)
#define readvl(x, n) vll x(n); FOR(i,0,n) scanf("%lld", &x[i])
#define BSYORN(x, target) binary_search(ALL(x), target) - (x).begin()
#define LOWER_BS(x, target) lower_bound(ALL(x), target) - (x).begin()
#define UPPER_BS(x, target) upper_bound(ALL(x), target) - (x).begin()
#define YESORNO(x) cout << (x? "YES\n": "NO\n")
#define SZ(x) (int)(x.size())
#define NL(x) cout << endl;

ll solve(ll t)
{
	return (1);
}
 
int main()
{
    fast_io;
	read(t);
    LP(1)
        cout << solve(t);
	return 0;
}