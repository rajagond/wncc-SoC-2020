/* ProbleM LINK
https://www.codechef.com/LRNDSA02/problems/STFOOD
*/
#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    int profit=0;
    for(int i=1;i<=n;i++){
        int s,p,v,value;
        cin>>s>>p>>v;
       
        value=(p/(s+1))*v;
        if(value>profit) profit=value;
       
    }
    cout<<profit<<'\n';
    return;
}
int main()
{
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
