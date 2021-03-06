/* Problem Statement link
https://www.codechef.com/APRIL20B/problems/CARSELL
*/
/* problem statement link
https://www.codechef.com/APRIL20B/problems/CARSELL
*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void solve(void){
    const unsigned int M = 1000000007;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    //for(int i=0;i<n;i++) cout<<a[i]<<endl;
    long long int sum=0;
    int f=0;
    for(int i=n-1;i>=0;i--){
        if((a[i]-f)<=0) break;
        else {
            a[i]=(a[i]-f)%M;
            sum=((sum)%M+(a[i])%M )%M;
            ++f;
        }
        //cout<<a[i]<<" "<<sum<<" "<<f<<endl;
    }
    std::cout << sum << std::endl;
}

int main() {
	// your code goes here
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
	
}
