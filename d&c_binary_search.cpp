#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;
int binary_search(int *a, int left, int right, int key) 
{ 
    if (right >= left) { 
        int mid_ele = left+(right-left)/2; 
        if (a[mid_ele] ==key) return mid_ele; 
        if (a[mid_ele] >key) 
            return binary_search(a, left, mid_ele - 1, key); 
        else return binary_search(a, mid_ele + 1, right, key); 
    } 
    return -1; 
} 
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k;
    cin>>k;
    //for(int i=0;i<n;i++) cout<<a[i]<<'\n';
    while(k-->0){
        int x;
        cin>>x;
        cout<<binary_search(a,0,n-1,x)<<" ";
    }
    cout<<'\n';
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
