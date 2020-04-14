/* Problem Statement Link
https://www.codechef.com/APRIL20B/problems/SQRDSUB/
*/
#include <bits/stdc++.h> 
#include <vector>
using namespace std; 
void solve(){
    //const unsigned long long int M=1000000007;
    vector<long long int> p,q;
    long long int N;
    long long int count=0;
    cin>>N;
    
    for(long long int i=0;i<N;i++){
        long long int x;
        cin>>x;

        if(abs(x)%4==0) {
            p.push_back(i);
            q.push_back(4);
        }
        if(abs(x)%4==2){
            p.push_back(i);
            q.push_back(2);
        } 

    }
    long long int n=p.size();
    long long int start=0,end=N-1;    
    // contiguous subsequence
    if(n==1){
        if(q[0]==2)
                count= count+ ((end-p[0]+1)*(p[0]-start+1));
    } 
    if(n>=2){
        long long int i=0;
        if(q[i]==2)
                count= count+ ((p[i+1]-p[i])*(p[i]-start+1));

        for (i = 1; i < n-1; i++) {
            if(q[i]==2)
                count= count+ ((p[i+1]-p[i])*(p[i]-p[i-1]));      
        }
        if(q[i]==2)
                count= count+ ((end-p[i]+1)*(p[i]-p[i-1]));
    }
    
    long long int res=((N*(N+1))/2) - count;
    std::cout << res << '\n';
    return;
  
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


