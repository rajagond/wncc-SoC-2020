/* Problem Statement Link
https://www.codechef.com/problems/IPCTRAIN
*/
#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

void solve(){
    int  n,D;
    cin>>n>>D;
    vector<pll> day_index;
    vector<pll> sad_lec;
    for(int i=0;i<n;i++){
        int d,t,s;
        cin>>d>>t>>s;
        day_index.push_back(make_pair(d,i));
        sad_lec.push_back(make_pair(s,t));
    }
           
    sort(day_index.begin(),day_index.end());//by default sort by first element
    priority_queue<pll> q;
    int index=0; 
    for(int i=1;i<=D;i++){
        
        while(index<n){
            if(day_index[index].first==i){
                    if(sad_lec[day_index[index].second].second)
                        q.push(sad_lec[day_index[index].second]);
                    ++index;
            }
            else {
                    break;
            }
        }
        if(!q.empty()){
            pll tp=q.top();
            //cout<<tp.first<<" "<<tp.second<<'\n';
            q.pop();
            ll v=tp.second;
            if(v>1) q.push(make_pair(tp.first,v-1));
        }
        
    }
    long long unsigned int sad=0;
    while(!q.empty()){
        pll tp=q.top();
        sad += (tp.first)*(tp.second);
        q.pop();
    }
    cout<<sad<<'\n';
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
