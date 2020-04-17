/* Problem Statement Link
https://www.codechef.com/problems/QM10P5A
*/
#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0,res=0;//res 0 represent no ball pick 1 red 2 black to check
    for(int i=0;i<n;i++){
        if(res==0){
            if(s[i]=='R') res=1;
            else res=2;
        }
        else{
            if(res==1&&s[i]=='B'){
                ++count;
                res=0;
                continue ;
            }
            if(res==2&&s[i]=='R'){
                ++count;
                res=0;
                continue ;
            }
        }
    }
    cout<<count<<'\n';
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
