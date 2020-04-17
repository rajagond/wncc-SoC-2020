/* Problem Statement Link
https://www.codechef.com/problems/BULLETS
*/
#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    int c=0;
    
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        c=(c^x);
    } 
    if(c==0) cout<<"Isa"<<'\n';
    else cout<<"Gaitonde"<<'\n';
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
