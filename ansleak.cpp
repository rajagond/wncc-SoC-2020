/* Problem Statement Link
https://www.codechef.com/APRIL20B/problems/ANSLEAK
*/
#include <bits/stdc++.h> 
using namespace std; 
  
int f(int a[], int n) 
{ 
    unordered_map<int, int> h; 
    for (int i = 0; i < n; i++) 
        h[a[i]]++; 

    int max = 0, res = -1; 
    for (auto i : h) { 
        if (max < i.second) { 
            res = i.first; 
            max = i.second; 
        } 
    } 
  
    return res; 
} 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        int a[k];
        for(int j=0;j<k;j++) cin>>a[j];
        cout<<f(a,k)<<" ";
    }
    cout<<'\n';
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
