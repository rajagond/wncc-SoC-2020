/* Problem Link(tag binary search)
https://www.spoj.com/problems/AGGRCOW/
*/
#include <bits/stdc++.h> 
using namespace std; 
//take help from https://youtu.be/TC6snf6KPdE
   
bool f(int a[],int val, int n, int c){// function to check min value possible or not
    int c_check=1,pre=a[0];// put 1 cow at position a[0]
    for (int i=1; i<n; i++)
    {
        if (a[i]-pre>=val)//if distance between a[i]-pre is greater than val
        {
            pre=a[i]; // previous position of index change to a[i]
            ++c_check; //put another cow at index a[i]
            if (c_check==c) //if it is equal to total cow or not
                return true;
        }
    }
    return false;
}

void solve(){
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int start=0,end=a[n-1]-a[0],ans=-1; //here end is max distance possible and start is min distance possible
    while(start<=end){// if start is greater is end than quit
       //Apply binary search 
       int mid=(start+end)/2; 
        //cout<<mid<<" "<<start<<" "<<end<<'\n';
        //cout<<ans<<'\n';
        if(f(mid,a,n,c)){ 
           ans=mid;
           start=mid+1; //check greater value than mid. Since, we have to maximise min distance
        }
        else end=mid-1; //if mid is false than no need to check at greater value
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
