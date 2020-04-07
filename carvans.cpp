/* Problem link
https://www.codechef.com/LRNDSA01/problems/CARVANS
*/

#include <bits/stdc++.h> 
using namespace std; 


void solve(){
    long long int n,count=1;
    cin>>n;
    long long int min;
    cin>>min;
    if(n==1) cout<<count<<'\n';
    else{
        for(int i=2;i<=n;i++){
            long long int x;
            cin>>x;
            if(x<=min) {
                count++;
                min=x;
            }
        }
        
        cout<<count<<'\n';
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
