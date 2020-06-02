#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    ll X_a=0,X_b=0,w_d=0;
    for(ll i=0;i<n;i++){
        if(X_a==X_b){
            if(a[i]==b[i]) w_d+=(a[i]*1);
        }
        X_b+=b[i];
        X_a+=a[i];
    }
    cout<<w_d<<'\n';
}

int main()
{
//    freopen("input.txt", "r", stdin);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
