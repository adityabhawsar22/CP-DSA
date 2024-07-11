#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define read(type) readInt<type>()
#define int  long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define fl(a,b) for(int i = a;i<b;i++)
#define COUNT(x,u) count(all(x), u)
#define MOD 1000000007
#define MIN INT_MAX
#define MAX INT_MIN
#define exp 1e9
#define sz(x) ((x).size())

#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
bool primeornot(int n)

{   if(n<=1) return false; 
if(n<=3) return true; 
if(n%2 == 0 || n % 3 == 0) return false;
   int i = 5;  while(i*i <= n){
 return false;
  i += 6;} 
   return true; 
    }

void solve(){
    int n=1;
    cin>>n;
    vi v(n);
    cin>>v; 


    
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}