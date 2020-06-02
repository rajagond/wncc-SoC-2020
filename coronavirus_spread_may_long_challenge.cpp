#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<ll> p,q;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        p.push_back(x);
    }
    ll prev=p[0],count=1;
    for(int i=1;i<n;i++){
        if(abs(p[i]-prev)<=2){
            ++count;
            prev=p[i];
        }
        else{
            q.push_back(count);
            count=1;
            prev=p[i];
        }
    }
    q.push_back(count);
    cout<<*min_element(q.begin(), q.end())<<" "<<*max_element(q.begin(), q.end())<<'\n';
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
