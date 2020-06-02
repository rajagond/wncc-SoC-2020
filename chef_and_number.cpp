#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{   if(a.first!=b.first)
       return (a.first > b.first);
    else
    return (a.second<b.second); 
} 
void solve(){
    int n;
    cin>>n;
    std::vector<pll > v;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    vector<pll> q;
    ll count=1,prev=v[0].first,prev_i=v[0].second;
    for(int i=1;i<n;i++){
        if(v[i].first==prev){
            if(v[i].second!=prev_i+1) {
                ++count;
                prev_i=v[i].second;
            }
             
        }
        else{
            q.push_back(make_pair(count,prev));
            prev=v[i].first;
            count=1;
            prev_i=v[i].second;
        }
        
    }
    q.push_back(make_pair(count,prev));
    sort(q.begin(),q.end(),sortinrev);
    int k=q.size();
    
        cout<<q[0].second<<'\n';
    //cout<<"close\n";
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
    
    int t;
    cin >> t;
    while(t --> 0)
        solve();

    return 0;
}
