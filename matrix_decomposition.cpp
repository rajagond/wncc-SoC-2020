#include <bits/stdc++.h> 
using namespace std; 
const long long int p =1000000007;
//some part taken from geeksforgeeks 
long long unsigned int power(long long unsigned int x, unsigned int y )  
{  

    long long unsigned int res = 1;     // Initialize result  

  

    x = x % p; // Update x if it is more than or  

                // equal to p 

   

    if (x == 0) return 0; // In case x is divisible by p; 

  

    while (y > 0)  

    {  

        // If y is odd, multiply x with result  

        if (y & 1)  

            res = (res*x) % p;  

  

        // y must be even now  

        y = y>>1; // y = y/2  

        x = (x*x) % p;  

    }  

    return res;  
}  

void solve(){
    int n;
    cin>>n;
    long long unsigned int a,sum=0;
cin>>a;
    for(int i=1;i<=n;i++){
	long long int unsigned  c=power (a,2*i-1);
        a=(a*c)%p ;
	sum =((sum)+(c))%p ;
	//cout<<sum<<" "<<a<<'\n';
    }
    cout<<sum<<'\n';
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
