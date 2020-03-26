#include<iostream>
using namespace std;
int min_ind(int *a,int n){
  int min=a[0],index=1;
  for(int i=0;i<n;i++){
    if(a[i]>=0){
      if(a[i]<min){
        min=a[i];
        index=i+1;
      }
    }
  }
  return index;
}
  
int main(){
  int T;
  cin>>T;
  while(T--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int max=a[0];
    int index=min_ind(a,n),i_max=1;
    for(int i=0;i<n;i++){
      if(a[i]>=max) {max=a[i]; i_max=i+1;}
    }
    int result=0;
    while(a[i_max-1]>=0){
      for(int i=0;i<n;i++) a[i]=a[i]-index;
      index=min_ind(a,n);
      result++;
    }
    cout<<result<<'\n';
  }
}
        
    
