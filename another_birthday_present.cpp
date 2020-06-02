#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> p,q;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        p.push_back(x);
        q.push_back(x);
    }
    sort(q.begin(),q.end());
    bool c=true;
    for(ll i=0;i<k;i++){
        vector<ll> r,s;
        for(int j=i;j<n;j=j+k){
            
            r.push_back(p[j]);
            s.push_back(q[j]);
        }
        sort(r.begin(),r.end());
        if(r!=s){
            c=false;
            break;
        } 
        //cout<<'\n';
    }
    

    if(c) cout<<"yes"<<'\n';
    else cout<<"no"<<'\n';
    
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
