#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;
// some part are taken from geeks for geeks;
// In-place rotates s towards left by d 
void leftrotate(string &s, int d) 
{ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} 
  
// In-place rotates s towards right by d 
void rightrotate(string &s, int d) 
{ 
   leftrotate(s, s.length()-d); 
} 
void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    if(n==1||n==2){
        cout<<"YES\n";
    }
    else{
        string str=s;
        leftrotate(s,1);
        rightrotate(str,1);
        if(s==str)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    
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
    
    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
