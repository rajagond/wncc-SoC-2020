/* Problem Statement Link
https://codeforces.com/contest/1335/problem/A
*/
#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    long long int n,a,b;
    cin>>n>>a>>b;
    char c='a';

        for(int i=0;i<n;i++) {
           char d=c+(i%b);
           cout<<d;
        }
        cout<<'\n';
    
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
