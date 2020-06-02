/* Problem Statement link
https://codeforces.com/contest/1175/problem/D
*/
#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    std::vector<ll> s;//s[i] represent suffix sum of array
    ll sum=0;
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=n-1;i>=0;i--){
        sum+=a[i];
        if(i!=0) {
            s.push_back(sum);
            
        }
    }
    sort(s.begin(),s.end(),greater<ll>());
    ll cost=sum;
    int i=0;
    while(i<k-1){
        cost+=s[i];
        
        ++i;
    }
    cout<<cost<<'\n';
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

