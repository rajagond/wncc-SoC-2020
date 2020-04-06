/* Problem statement link
https://www.codechef.com/LRNDSA01/problems/TEST
*/

#include <bits/stdc++.h> 
using namespace std; 


void solve(){
    while(true){
        int x;
        cin>>x;
        if(x==42) break;
        else{
            cout<<x<<'\n';
        }
    }
}
int main()
{
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    //cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
