#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = 1e9 + 7;

pair<int,int> partition3(vector<int> &a, int l, int r) {
  int mid_i = l;
  pair<int,int> ans;
  while(mid_i<=r) {
    if(a[mid_i]<a[l]){
      swap(a[mid_i],a[l]); 
      mid_i++; l++;
    }
    else{
       if(a[mid_i] == a[l]) mid_i++;
       else{ 
           swap(a[r], a[mid_i]);
           r--;
        }    
    }
  }
  ans.first= l;
  ans.second= mid_i;
  return ans;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  pair<int,int> m = partition3(a, l, r);

  randomized_quick_sort(a, l, m.first);
  randomized_quick_sort(a, m.second, r);
}

int main() {
  //    freopen("input.txt", "r", stdin);
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    cout << a[i] << ' ';
  }
}
