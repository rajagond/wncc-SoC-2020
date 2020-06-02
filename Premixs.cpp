/* Problem Statement Link
https://www.codechef.com/problems/PERMEXIS
*/
#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    if(n==1) cout<<"YES"<<'\n';
    else{
        bool c=true;
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>1) {
                c= false;
                break;
            }
        }
        if(c) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return ;
}
int main()
{
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
