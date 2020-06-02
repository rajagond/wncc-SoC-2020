#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7; 
const int IT_MAX=42;
int array_R[IT_MAX]={0},array_Iter[IT_MAX]={0},array_L[IT_MAX]={0};

// some part are taken from geeksforgeeks
// Function that convert Decimal to binary 
int decToBinary(int *arr, ll n) 
{ 
	// Size of an integer is assumed to be 42 bits 
	for (int i = 0; i <IT_MAX; i++) { 
		int k = n >> i; 
		(k & 1) ? arr[i]=1 : arr[i]=0; 
	}
    /*int i=0;
    while(n){
        
    	arr[i]=n&1;
    	n/=2;
    	i++
    }*/
} 
ll calci(ll X, ll Y, ll number){
    return (X&number)*(Y&number);
}
ll f(ll X,ll Y,ll L, ll r, ll xORy){
	ll value=r&xORy;
	ll maximum=calci(X,Y,r), result=r;
    if(xORy<=r&&xORy>=L){
        ll local_max0=calci(X,Y,xORy);
    	if(maximum<local_max0)  {result=xORy; maximum=local_max0;}
    	else{
    	    if(maximum==local_max0) result=min(result,xORy);
    	}
    	//cout<<maximum<<" "<<calci(X,Y,xORy)<<" "
    }
    ll local_max=calci(X,Y,value);
    if(value<=r && value >=L){
        if(maximum<=local_max){
              (maximum!=local_max) ? result=value: result=min(result,value);
              maximum=local_max;
        }
    }
    decToBinary(array_R,r);
    decToBinary(array_L,L);
    /*for(int i=0;i<IT_MAX;i++){
        cout<<array_R[i]<<" ";
    }*/
    //cout<<'\n';
    ll itermediate=0;
    for(int i=IT_MAX-1; i>=0; i--){
        if(array_R[i]==1){
            itermediate=(r&(ll)(pow(2,IT_MAX)-pow(2,i+1)))|(xORy&((ll)(pow(2,i))-1));
 
        	if(itermediate<L) {
                decToBinary(array_Iter,itermediate);
                
                for (int x = i; x>=0; --x)
                {
                    ll c=0;
                    if(array_L[x]==1){
                        c=(ll)(pow(2,x));
                        if((itermediate|c)<=r) {
                            itermediate = (itermediate|c);
                        }
                    }
                      // cout<<itermediate<<" "<<i<<" "<<j<<'\n';
                    if(itermediate>=L){
                        break;
                    } 
                 
                }
            }
            ll local_max2=calci(X,Y,itermediate);
        	//cout<<itermediate<<" "<<local_max2<<'\n';
        	if(itermediate<=r && itermediate >=L){
                if(maximum<=local_max2){
                    (maximum==local_max2) ? result=min(result,itermediate) : result=itermediate;
                    maximum=local_max2;
                }
            }
            
        }   
    }
    if(maximum==0 )result=L;
    return result;
}

void solve(){
    ll X,Y,L,R;
    cin>>X>>Y>>L>>R;
    ll XorY=(X|Y);
    //cout<<(X|Y)<<"\n";
    if(X==0||Y==0){
        cout<<L<<'\n';
    }
    else{
        if(XorY<=R&&XorY>=L){
            cout<<XorY<<'\n';
            return ;
        }
        else{
                if(L==R){ cout<<L<<'\n'; return;}
                else cout<<f(X,Y, L, R,XorY)<<'\n';
                return ;
        }
        
    }
    
    return ;
}
int main()
{
//    freopen("input.txt", "right_bound", stdin);
#ifdef LOCAL
    freopen("in.txt", "right_bound", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
