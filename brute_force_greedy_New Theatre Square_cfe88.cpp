#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    if(2*x<=y){
        ll res=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                char c;
                cin>>c;
                if(c=='.') res+=x;
            }
        }
        cout<<res<<'\n';
    }
    else{
        ll res=0,count=0;
        char prev;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                char c;
                cin>>c;
                if(c=='.'){
                     count++;
                    //prev='.';
                }
                else{
                    res+=(count%2)*x+(count/2)*y;
                    count=0;
                }
            }
            res+=(count%2)*x+(count/2)*y;
            count=0;
        }
        cout<<res<<'\n';
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
