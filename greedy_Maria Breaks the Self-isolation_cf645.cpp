#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll res=1,i=0;
    while(i<n){
        if(res>=a[i]) res++;
        else{
            //int j=i;
            ll val=a[i],count=res+1;
            i++;
            while(i<n){
                
                val=max(val,a[i]);
                //cout<<count<<" "<<val<<'\n';
                //count++;
                if(count>=val) {
                    //i=j;
                    res=count+1;
                    break;
                }
                i++;
                count++;
            }
            
        }
        i++;
        //cout<<a[i]<<" "<<res<<'\n';
    }
    cout<<res<<'\n';
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
