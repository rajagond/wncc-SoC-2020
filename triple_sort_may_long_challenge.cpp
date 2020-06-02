#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;
const ll mx=300001;
ll rotation_even=0;
//some part are taken from https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/
void solve(){
    ll n,k;
    cin>>n>>k;
    rotation_even=0;
    vector<ll> original_array,p;
    ll arr_position[mx];
    for (ll i = 0; i < n; i++){
        ll x;
        cin>>x;
        p.push_back(x);
        original_array.push_back(x);
    }
    sort(original_array.begin(), original_array.end());
    for (ll i = 0; i < n; i++){
        arr_position[original_array[i]]=i;
    }
    vector<bool> visited_array(n, false);
    vector<ll> triple_rotation,even_no_of_rotation,odd_no_of_rotation;
    ll result = 0;
    for (ll i = 0; i < n; i++){
        if (visited_array[i] || arr_position[p[i]] == i)
            continue;
        ll triple_rotation_size = 0;
        ll k = i;
        triple_rotation.clear();
        while (!visited_array[k])
        {
            visited_array[k] = true;
            ++triple_rotation_size;
            triple_rotation.push_back(k);
	        k=arr_position[p[k]];
        }
        if (triple_rotation_size > 0){
            if(triple_rotation_size%2==1){
                result+=(triple_rotation_size-1)/2;
                for(ll m=1; m<triple_rotation_size; m+=2){
                    odd_no_of_rotation.push_back(triple_rotation[0]);
                    odd_no_of_rotation.push_back(triple_rotation[m]);
                    odd_no_of_rotation.push_back(triple_rotation[m+1]);
                }
            }
            else{
            
                result+=triple_rotation_size/2; --result;
                rotation_even++;
                for(ll m=0; m<=triple_rotation_size-4; m+=2){
                
                    odd_no_of_rotation.push_back(triple_rotation[0]);
                    odd_no_of_rotation.push_back(triple_rotation[m+1]);
                    odd_no_of_rotation.push_back(triple_rotation[m+2]);

                }
                even_no_of_rotation.push_back(triple_rotation[0]);
                even_no_of_rotation.push_back(triple_rotation[triple_rotation_size-1]);
            }
        }
    }

    if(rotation_even%2==1 || result+rotation_even>k)cout<<-1<<'\n';
    else{
    
        cout<<result+rotation_even<<'\n';
        ll val=odd_no_of_rotation.size(),j=0;
        while( j<val){
            cout<<odd_no_of_rotation[j]+1<<" "<<odd_no_of_rotation[j+1]+1<<" "<<odd_no_of_rotation[j+2]+1<<"\n";
            j+=3;
        }
        val=even_no_of_rotation.size(),j=0;
        while(j<val){
             cout<<even_no_of_rotation[j]+1<<" "<<even_no_of_rotation[j+1]+1<<" "<<even_no_of_rotation[j+2]+1<<"\n";
            cout<<even_no_of_rotation[j]+1<<" "<<even_no_of_rotation[j+3]+1<<" "<<even_no_of_rotation[j+2]+1<<"\n";
            j+=4;
        }
    }
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

