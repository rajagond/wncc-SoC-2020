#include<bits/stdc++.h>
using namespace std;

int histarea(int a[],int n){
	stack<int> v;
	int tp=0;
	int max_area=0;
	int i=0;
	while(i<n){
		if(v.empty()||a[v.top()]<=a[i]){
			v.push(i++);
		}
		else{
			int area=0;
			tp=v.top();
			v.pop();
			if(v.empty()) area=(a[tp])*i;
			else{
				area=a[tp]*(i-v.top()-1);
			}
			if(area>=max_area) max_area=area;
			cout<<tp<<" "<<a[tp]<<" "<<area<<'\n';
		}

	}
	while(v.empty()==false){
		int area=0;
		tp=v.top();
		v.pop();
		if(v.empty()) area=a[tp]*i;
		else{
			area=a[tp]*(i-v.top()-1);
		}
		if(area>=max_area) max_area=area;
		cout<<area<<'\n';
	}
	return max_area;

}
int main( ){
	//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<histarea(a,n)<<'\n';
	return 0;
}
