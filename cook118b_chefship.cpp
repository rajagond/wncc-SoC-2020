#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pll;
const ll mod = 1e9 + 7;
void solve(){
    string str;
    cin>>str;
    int count=0,i=2;
    int s=str.size();
    while(i+2<=s){
        int l1=i/2,l2=(s-i)/2;
        if(str.substr(0,l1)==str.substr(l1,l1)){
            if(str.substr(i,l2)==str.substr(i+l2,l2)) count++;
        }
        i+=2;
    }
    cout<<count<<'\n';
    return ;
}

int main()
{
//    freopen("input.txt", "r", stdin);
#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}

