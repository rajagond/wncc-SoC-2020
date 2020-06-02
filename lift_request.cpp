#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n,q;
    cin>>n>>q;
    long long int count=0;
    int previous=0;
    while(q-->0){
        int f,d;
        cin>>f>>d;
        count +=abs(f-previous);
        previous=f;
        count +=abs(d-previous);
        previous=d;
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
