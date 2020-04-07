/* Problem link
https://www.codechef.com/LRNDSA01/problems/CONFLIP
*/

#include <bits/stdc++.h> 
using namespace std; 


void solve(){
    int g;
    cin>>g;
    while(g --> 0){
        int I,n,q;
        cin>>I>>n>>q;

        int count=0;
        
        for(int i=1;i<=n;i+=2) ++count;
        if(q==I)
            cout<<n-count<<'\n';
        else cout<<count<<'\n';
    }
    return ;
}
int main()
{
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
