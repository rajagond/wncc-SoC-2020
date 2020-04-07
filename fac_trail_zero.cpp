/*Problem link
https://www.codechef.com/LRNDSA01/problems/FCTRL
*/

#include <bits/stdc++.h> 
using namespace std; 


void solve(){
    long long int n,count = 0; 
    cin>>n;
	// Keep dividing n by powers of 
	// 5 and update count 
	for (long long int i = 5; n / i >= 1; i *= 5) 
		count += n / i; 
	cout<<count<<'\n';
	return;
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
