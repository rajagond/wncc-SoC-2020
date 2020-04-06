/* Problem link
https://www.codechef.com/LRNDSA01/problems/FLOW007
*/

#include <bits/stdc++.h> 
using namespace std; 
int reversDigits(int num) 
{ 
    int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 

void solve(){
    int num;
    cin>>num;
    cout<<reversDigits(num)<<'\n';
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
