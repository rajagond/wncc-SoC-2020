/* Problem Statement link
https://codeforces.com/contest/448/problem/D
*/
#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    ll n,m;
    cin>>n>>m;
    ll k;
    cin>>k;
    ll left=1;//lowest possible sum
    ll right=(n*m),mid;
    while(left<right){
        mid= left+(right-left)/2;//to avoid overflow
        
        ll x=0;
        
        for(int i=1;i<=n;++i)    
                x += ( m < (mid/i)) ? m : (mid/i) ;
            //cout<<x<<" "<<mid<<" "<<right<<" "<<left<<'\n';
        
        //cout<<x<<" "<<mid<<" "<<right<<" "<<left<<'\n';
        
        if(x<k) left=mid+1;//kth element is more than mid
        else right =mid;

    }
    cout<<left<<'\n';
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
