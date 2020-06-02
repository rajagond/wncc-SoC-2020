#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<int, int> pll;
const ll mod = 1e9 + 7;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
}
void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    ll result=0;
    for(ll i=0;i<n;i++){
        result += (a[i])*(b[i]);
    }
    cout<<result<<'\n';
    return ;
}

int main()
{
//    freopen("input.txt", "r", stdin);
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    //cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
