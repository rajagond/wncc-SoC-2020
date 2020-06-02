#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pll;
const ll mod = 1e9 + 7;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    bool vis1[n+1]={false};
    bool c=true;
    std::vector<int> v;
    int prev=a[0],count=1;
    for(int i=1;i<n;i++){
       //cout<<a[i]<<" "<<prev<<" "<<count<<" "<<i<<'\n';
        if(a[i]==prev) count++;
        else{
            if(vis1[count]==true) {
                c=false;
                break;
            }
            else vis1[count]=true;
            count=1;
            v.push_back(prev);
            prev=a[i];
            if(binary_search(v.begin(),v.end(),prev)){
                c=false;
                break;
            }
        }
    }
    if(!c) cout<<"NO\n";
    else{
        if(vis1[count]==true) {
            cout<<"NO\n";
        }
        else cout<<"YES\n";
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
    
    int t=1;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}

