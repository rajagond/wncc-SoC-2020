#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;
int majority(int *a,int n){
    int count=1,prev=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==prev) count++;
        else{
            if(count>n/2) return 1;
            count=1;
            prev=a[i];
        }
    }
    if(count>n/2) return 1;
    else return 0;
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cout<<majority(a,n)<<'\n';
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
   // cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
