#include <iostream>
using namespace std;
int check1(int a,int b){
	if(a-b>0) return (a-b);
	else return check1(a,b-1);
}
int check2(int a,int b){
	if(a+b<=8) return (a+b);
	else return check2(a,b-1);
}

int main(){
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		int R,C,K;
		cin>>R>>C>>K;
		int result;
		result=(check2(R,K)-check1(R,K)+1)*(check2(C,K)-check1(C,K)+1);
		cout<<result<<endl;
	}
	return 0;
}
		
			
