#include <bits/stdc++.h>
#define endl '\n';
#define ln cout<<endl;
#define YES print("YES")
#define NO print("NO")
#define ll long long
#define ull unsigned long long
#define all(V) V.begin(),V.end()
#define pb push_back
#define ff first
#define ss second
#define print(A) cout<< A <<endl;
#define elif else if
#define sz(x) ((ll)(x).size())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define count(a,x) count(a.begin(), a.end(),x)
#define sum(a) accumulate(a.begin(), a.end(),0)
#define maxl(A) max_element(all(A))
#define minl(A) min_element(all(A))
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<< " " << x << endl;
#define debugs(x) cerr << #x<< " "; _print(x);
#else
#define debug(x)
#define debugs(x)
#endif
using namespace std;
template<class T>void _print(vector<T>v) {cerr << "[ "; for (T out : v) {cerr << out << " ";} cerr << "]" << endl;}
template<class T, class V>void _print(map<T, V>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
template<class T, class V>void _print(vector<pair<T, V>>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
template<class T, class V>void _print(unordered_map<T, V>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
template<class T>void _print(set<T>v) {cerr << "[ "; for (T out : v) {cerr << out << " ";} cerr << "]" << endl;}
//template<class T>void _print(vector<T>v){cerr<<"[ ";for(T out:v){cerr<<out<<" ";}cerr<<"]"<<endl;}
//const ll N =;
//const ll arr[N];
void init() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
}
//cd "C:\Users\Hp\Desktop\CodeForce\";python .\compare.py

void solve() {

	ll n, k, d, w;
	cin >> n >> k >> d >> w;
	ll p = d + w, c = 0, j, a, pack = 0;
	vector<ll> v(n);
	for (auto &out : v)
	{
		cin >> out;
	}
	for (int i = 0; i < n; ++i)
	{
		c = 0;
		a = v[i];
		debug(v[i])

		while (i < n ) {
			c++;
			i++;
			if (v[i] - a > p || c == k) {
				i--;
				break;
			}


		}



		pack++;

	}
	print(pack)










}

int main() {init(); int t; cin >> t; while (t--) {solve();} return 0;}