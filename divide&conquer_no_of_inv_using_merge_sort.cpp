#include <iostream>
#include <vector>

using std::vector;
long long int merge(vector<int> &a, vector<int> &b, size_t left, size_t ave, size_t right) {
  size_t tp1=left, tp2=ave, tp3=left;
  long long int count_inv=0;
  while(tp1<=ave-1 && tp2<=right){
    if(a[tp1]<=a[tp2]){
      b[tp3]=a[tp1];
      ++tp1;  ++tp3;
    }
    else{
      b[tp3]=a[tp2];
      count_inv+=ave-tp1;
      ++tp2; ++tp3;
    }
  }
  while(tp1<=ave-1){
    b[tp3]=a[tp1];
    ++tp3; ++tp1;
  }
  while(tp2<=right) {
    b[tp3]=a[tp2];
    ++tp3; ++tp2;
  }	
  for(tp1=left; tp1<=right; ++tp1) a[tp1]=b[tp1];
 return count_inv;
}
long long int get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
  long long int number_of_inversions = 0;
  if (right <= left + 1) return number_of_inversions;
  size_t ave = left + (right - left) / 2;
  number_of_inversions += get_number_of_inversions(a, b, left, ave);
  number_of_inversions += get_number_of_inversions(a, b, ave, right);
  //write your code here
  number_of_inversions += merge(a, b, left, ave+1, right);
  return number_of_inversions;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  vector<int> b(a.size());
  std::cout << get_number_of_inversions(a, b, 0, a.size()-1) << '\n';
}
