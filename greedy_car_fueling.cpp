#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<int, int> pll;
const ll mod = 1e9 + 7;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
}
void solve(){
    int d,wi;
    cin>>d>>wi;
    int w=wi;
    int n;
    cin>>n;
    int a[n],count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool c=false;
    for(int i=0;i<n-1;i++){
        if(w>=d) break;
        if(a[i+1]>w){
            count++;
            w = a[i]+wi;
             if(a[i+1]>w) c=true;
        }
    }
    if(c){ cout<<-1<<'\n'; return ;}
    if(w>=d) cout<<count<<'\n';
    else{
        w =a[n-1] + wi;
        count++;
        if(w>=d) cout<<count<<'\n';
        else cout<<-1<<'\n';
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
    //cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
