#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<int, int> pll;
const ll mod = 1e9 + 7;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
    double a1 = (double)a.first / a.second; 
    double b1 = (double)b.first / b.second; 
    return a1>b1;
}
void solve(){
    int n;
    double w;
    cin>>n>>w;
    vector<pair<double,double>> p;
    for(int i=0;i<n;i++){
        double v;
        double wx;
        cin>>v>>wx;
        //double fa=v/wx;
        p.push_back({v,wx});
    }
    sort(p.begin(),p.end(),sortinrev);
    double cw = 0.0; 
    double result = 0.0; 
    for (int i = 0; i < n; i++) 
    { 
        if (cw + p[i].second <= w) 
        { 
            cw += p[i].second; 
            result += p[i].first; 
        }
        else
        { 
            result += p[i].first * ((double) (w-cw) / p[i].second); 
            break; 
        } 
    } 
    cout<<fixed<<setprecision(4)<<result<<'\n';
    return ;
}

int main()
{
//    freopen("input.txt", "r", stdin);
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    //cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
