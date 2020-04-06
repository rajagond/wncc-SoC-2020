/* Problem link
https://www.codechef.com/LRNDSA01/problems/LAPIN
*/
#include<cmath>
#include <bits/stdc++.h> 
#include <string>
using namespace std; 


void solve(){
    string a;
    cin>>a;
    int n=a.size();
    string b=a.substr(0,n/2),c;
    if(n%2==0) c=a.substr(n/2,n/2);
    else c=a.substr(n/2+1,n/2);
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    //cout<<b<<" "<<c<<endl;
    if( b.compare(c)==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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
