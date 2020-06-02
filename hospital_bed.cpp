#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>a[i][j];
    bool c=true;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            //cout<<a[i][j-1]<<" "<<a[i][j]<<'\n';
            if(a[i][j-1]==1&&a[i][j]==1) {
                c=false;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            //cout<<a[i][j-1]<<" "<<a[i][j]<<'\n';
            if(a[j-1][i]==1&&a[j][i]==1) {
                c=false;
                break;
            }
        }
    }
    if(c) cout<<"SAFE\n";
    else cout<<"UNSAFE\n";
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

