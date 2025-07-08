#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rtn return 0;
#define vctr vector<int> arr(n);
#define vinp for(int i = 0; i < n; i++) cin >> arr[i];
#define vpush vector<int> arr; for(int i = 0; i < n; i++) { int x; cin >> x; arr.push_back(x); }
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
  FAST_IO
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n>>k;
    vctr
    vinp
    if(k>1 || is_sorted(arr.begin(),arr.end()))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
    

  }
  
  rtn
}