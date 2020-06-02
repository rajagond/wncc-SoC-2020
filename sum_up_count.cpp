#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;
unordered_map<ll,ll> hm;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        a[i-1]=x;
        hm[x]++;
    }
    
    
    for(ll i=0;i<n;i++){
        if(hm[a[i]] !=-1){
            cout<<a[i]+hm[a[i]]<<" ";
            hm[a[i]]=-1;
        }
    }
    cout<<'\n';
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
