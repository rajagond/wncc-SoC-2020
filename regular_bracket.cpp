/* Problem Statement link
https://codeforces.com/contest/5/problem/C
*/
#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;
int a[1000001];//store ending of open bracket
int len[1000001];//len for extended regular and frequency store frequency
void solve(){
    string str;
    cin>>str;
    stack<int> s;
    int max_value=0,count=1;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            s.push(i);
        }
        else{
            if(s.empty()){
                a[i]=len[i]=-1;//invalid character
            }
            else{
                int tp=s.top();//return top element 
                s.pop();//pop top element;
                a[i]=len[i]=tp;

                if(tp > 0 && str[tp-1] == ')' && a[tp-1] >= 0)//merge two valid regular bracket
                    len[i] = len[tp - 1];
                
                int large = i - len[i] + 1;
                if(max_value==large) ++count;
                else{
                    if(large>max_value) {
                        max_value=large;
                        count=1;
                    }
                }
            }
        }
    }
    cout<<max_value<<" "<<count<<'\n';
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
