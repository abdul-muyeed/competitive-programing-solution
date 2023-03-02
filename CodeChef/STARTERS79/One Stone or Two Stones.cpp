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
void display(int a[], int n)
{
	unordered_set<ll> s;
	for (int i = 0; i < n / 2; ++i)
	{
		s.insert(a[i] + a[n - 1 - i]);
	}
	if (s.size() == n / 2) {
		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		} ln
	}
}

// Function to find the permutations

void solve() {
	ll a, b;
	cin >> a >> b;
	if (a == b) {
		if (a & 1) {
			print("CHEF")
			return;
		} else {
			print("CHEFINA")
			return;
		}
	}
	ll dif = abs(a - b);
	ll mini = min(a, b);
	if (dif == 1) {
		if (mini & 1) {
			print("CHEF")
			return;
		} else {
			print("CHEFINA")
			return;
		}
	} else {
		if ( a < b) {
			print("CHEFINA")
			return;
		} else {
			print("CHEF")
			return;
		}
	}




}

int main() {init(); int t; cin >> t; while (t--) {solve();} return 0;}