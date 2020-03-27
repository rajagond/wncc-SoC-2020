#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool t=false;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
           t=true;
           break;
        } 
    }
    if(t) cout<<"First\n";
    else cout<<"Second\n";
    return 0;
}
