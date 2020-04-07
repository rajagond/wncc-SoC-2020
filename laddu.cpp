/* Problem link
https://www.codechef.com/LRNDSA01/problems/LADDU
*/
#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    int count=0;
    string y;
    cin>>y;
    for(int i=1;i<=n;i++){
        string x;
        cin>>x;
        if(x=="CONTEST_WON"){
            count+=300;
            int rank;
            cin>>rank;
            if(rank<=20) count+=(20-rank);
        }
        if(x=="TOP_CONTRIBUTOR") count+=300;
        if(x=="BUG_FOUND") {
            int s;
            cin>>s;
            count +=s;
        }
        if(x=="CONTEST_HOSTED") count+=50;
    }
    if(y=="INDIAN") cout<<(count/200)<<'\n';
    else cout<<(count/400)<<'\n';
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
