/* Problem Link(tag binary search)
https://www.spoj.com/problems/AGGRCOW/
*/
#include <bits/stdc++.h> 
using namespace std; 
int n,c;
   
bool f(int val,int a[]){
    int cows=1,pre=a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]-pre>=val)
        {
            pre=a[i];
            ++cows;
            if (cows==c)
                return true;
        }
    }
    return false;
}

int binarysearch(int a[], int start,int end){
    if(start+1>end) return start;
    else{
        int mid=(start+end)/2;
        if(f(mid,a)){
           return binarysearch(a, mid+1,end);
        }
        else return binarysearch(a, start,mid-1);
    }
}
void solve(){
    
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int start=0,end=a[n-1]-a[0],ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        //cout<<mid<<" "<<start<<" "<<end<<'\n';
        //cout<<ans<<'\n';
        if(f(mid,a)){
           ans=mid;
           start=mid+1;
        }
        else end=mid-1;
    }
    cout<<ans<<'\n';
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
