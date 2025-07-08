#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

#define rtn return 0;
#define vctr(size) vector<int> arr(size);
#define vctr(n, name) vector<int> name(n);
#define vctr_init(n, name,init) vector<int> name(n,init);
#define vinp(n, name) for(int i = 0; i < n; i++) cin >> name[i];
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define vec(type, n, name) vector<type> name(n);
#define setarr(arr) set<int> set_arr(arr.begin(),arr.end());

int main() {
  FAST_IO
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vctr(n,arr)
    vinp(n,arr)
    setarr(arr)
    if(set_arr.size() == 1)
        cout << "Yes" << endl;
    else if(set_arr.size() == 2) {
        vctr_init(2,freq,0)
        int cnt=0;
        for(int value : set_arr) {
            freq[cnt++] = count(arr.begin(), arr.end(), value);
        }
        if(abs(freq[0] - freq[1])<=1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
        cout << "No" << endl;
  }
  
  rtn
}