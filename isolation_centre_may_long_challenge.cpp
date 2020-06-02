#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    ll n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    map<char,ll> hm;
    ll str_size=str.size();
    for(ll i=0;i<str_size;i++){
        hm[str[i]]++;
    }
    while(q-->0){
        ll x,count=0;
        cin>>x;
        for(auto y:hm){
            if(y.second>x) count+=(y.second-x);
        }
        cout<<count<<'\n';
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
