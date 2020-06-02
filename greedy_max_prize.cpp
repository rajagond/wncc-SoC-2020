#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<int, int> pll;
const ll mod = 1e9 + 7;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
}
void solve(){
    int n,result=0;
    cin>>n;
    //std::vector<int> v;
    int i=1;
    while(n>0){
       if(n-2*i-1<0) break;
       else{
           result++;
           n -= i;
           i++;
       }
    }
    cout<<result+1<<'\n';
    for(int j=1;j<=result;j++) cout<<j<<" ";
    cout<<n<<'\n';
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
    //cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
