/* Problem Statement Link
https://www.codechef.com/APRIL20B/problems/UNITGCD
*/
#include <bits/stdc++.h>
#include <cmath> 
#include<algorithm>
using namespace std; 


void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        cout<<1<<" "<<1<<'\n';
    }
    else {
        int p = n/2;
        cout<<p<<'\n'; 
        if(n%2==1){
            int i=1;
            cout<<3<<" "<<i++<<" "<<i++<<" "<<i++<<'\n';
            for(int j=2;j<=p;j++){
                cout<<2<<" "<<i++<<" "<<i++<<'\n';
            }
        }
        else{
            int i=1;
            for(int j=1;j<=p;j++){
                cout<<2<<" "<<i++<<" "<<i++<<'\n';
            }
        }
    }
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

