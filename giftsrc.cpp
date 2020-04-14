/* Problem Statement link
https://www.codechef.com/problems/GIFTSRC
*/
#include <bits/stdc++.h> 
using namespace std; 
class Point{
    public:
        int x,y;
    Point(int a,int b){
        x=a;
        y=b;
    }
};
void solve(){
    int n;
    cin>>n;
    Point a(0,0);
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++){
        if(((s[i]=='L')||(s[i]=='R'))&&c==1) continue;
        else {
            if(((s[i]=='U')||(s[i]=='D'))&&c==2) continue;
            else{
                if(s[i]=='L'){
                    --(a.x);
                    c=1;
                }
                if(s[i]=='R'){
                    ++(a.x);
                    c=1;
                }
                if(s[i]=='D'){
                    --(a.y);
                    c=2;
                }
                if(s[i]=='U'){
                    ++(a.y);
                    c=2;
                }
            }
        }
    }
    cout<<a.x<<" "<<a.y<<'\n';
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
