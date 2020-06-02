/* Problem Statement Link
https://www.codechef.com/problems/BWCELL
*/

#include <bits/stdc++.h> 
using namespace std; 
//Nim Approach addittion
void solve(){
    string s;
    cin>>s;
    //pair<int,int> p;
    int n=s.size(),count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='W') break;
        else ++count;
    }
    count=(count)^(n-1-count);
    if(count==0) cout<<"Chef"<<'\n';
    else cout<<"Aleksa"<<'\n';
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
