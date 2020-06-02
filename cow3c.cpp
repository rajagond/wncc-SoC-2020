#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll m = 1e9 + 7;
map<ll,ll> hm;
void solve(){
    ll n;
    cin>>n;
    vector<pll> v;
    for(ll i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        hm[x]++;
        hm[y+1]--;
    }
    auto it = hm.begin();
    ll count=it->second,prev=it->first;
    ll sum=count;
    for(auto it1=hm.begin();it1 !=hm.end();it1++){
        if(it==it1) continue;
        ll x=it1->first;
        ll y=it1->second;
        if(x!=prev+1) sum=(sum%m+((count%m)*((x-prev-1)%m))%m)%m;
        count =(count%m +y%m)%m;
        sum = (sum +count)%m;
        prev=x;
        //cout<<x<<" "<<y<<" "<<count<<"q\n";
        //cout<<sum<<'\n';
    }
    cout<<sum<<'\n';
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
