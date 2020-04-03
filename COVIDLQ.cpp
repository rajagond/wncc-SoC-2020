/* Problem link
https://www.codechef.com/APRIL20B/problems/COVIDLQ
*/
#include <iostream>
using namespace std;

void solve(void){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int index1=0,index2=0;
    bool c=false;
    int k=0;
    for(int i=0;i<n;i++){
        
        if(a[i]==1){
            if(k==0){
                index1=i;
                
            }
            else if(k==1) 
            {index2=i;
            }
            else {
                index1=index2;
                index2=i;
            }
            ++k;
        }
        int r=(index2-index1);
        if(r<6&&r>0){
            c=true;
            break;
        }
       //cout<<r<<" "<<index1<<" "<<index2<<endl; 
    }
    if(c) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
        
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
