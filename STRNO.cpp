/*problem statement link
  https://www.codechef.com/APRIL20B/problems/STRNO
  */

#include <bits/stdc++.h> 
using namespace std; 


void solve(){
    long int n,K;
    cin>>n>>K;
    long int count=0;
    while(n%2==0){
        n=n/2;
        ++count;
    }
	for (long int i=3; i*i<=n; i+=2) 
	{ 
		while (n%i == 0) 
		{ 
		    n=n/i;
		    ++count;
		   
		} 
	}
	if(n>2) ++count;
    
    if(count<K)
        std::cout << 0 << std::endl;
    else
        std::cout << 1<< std::endl;
    
    //cout<<count<<endl;
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
