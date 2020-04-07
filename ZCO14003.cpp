/* Problem link
https://www.codechef.com/LRNDSA01/problems/ZCO14003
*/
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std; 


void solve(){
   long long int n;
   cin>>n;
   long long int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   long long int max_pro=0;
    for(int i=0;i<n;i++){
        long long int temp=a[i]*(n-i);
        if(temp>max_pro) max_pro=temp;
    }
   cout<<max_pro<<'\n';
   return ;
}
int main()
{
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    //cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
