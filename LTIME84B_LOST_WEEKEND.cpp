#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    int n=5;
    //cin>>n;
    int a[n];
    int P;
    for(int i=0;i<n;i++) cin>>a[i];
        cin>>P;
    ll sum=0;
    for(int i=0;i<n;i++) sum+=(ll)(P*a[i]);
    if(sum>(ll)(5*24)) cout<<"Yes"<<'\n';
    else cout<<"No\n";
    //cout<<n<<'\n';
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
    
    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
