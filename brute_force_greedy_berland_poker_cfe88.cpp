#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll c=n/k;
    if(m==0) cout<<m<<'\n';
    else{
        if(m<=c) cout<<m<<'\n';
        else{
            if(k==1) {cout<<c<<'\n'; return ;}
            ll mx=c;
            ll res=0;
            ll val=(m-c),i;
            for( i=0;i<=val;i++){
                if((k-1)*i>=val) break;
            }

                res=(mx)-(i);
            cout<<res<<'\n';
        }
    }
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
    
    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
