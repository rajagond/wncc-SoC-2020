#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    vector <int> p,q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0) p.push_back(a[i]);
        else q.push_back(a[i]);
    }
    if(p.empty()||q.empty()){
        cout<<"no"<<'\n';
    }
    else{
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        if((s+p[0]+q[0])<=100){
            cout<<"yes"<<'\n';
        }
        else cout<<"no"<<'\n';
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
