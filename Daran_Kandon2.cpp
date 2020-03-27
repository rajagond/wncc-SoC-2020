#include <iostream>
#include<utility>
#include<bits/stdc++.h>

using namespace std;

int main(){
  
  int T=1;
  //cin>>T;
  while(T--){
    int n=100000;
    //cin>>n;
    pair <int, int> a[n];

    for(int i=0; i<n; i++){
      int x=i*10000;
      //cin >> x;
      a[i] = {x, i+1};
    }
    sort(a, a+n);

    int min=a[0].first,index=0;

    for(int i=0;i<n;i++)
{      if(a[i].first>=0){
        if(a[i].first<min){
          min=a[i].first;
          index=i;
        }
      }
    }

    int result=0;

    while(index<n){
      for(int i=index;i<n;i++) a[i].first=a[i].first-a[index].second;
        if(a[index].first<0) index++;
      result++;
    }
    cout<<result<<'\n';
  }
  return 0;
}
        
    
