#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
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
    int n ,m;
    cin >> n>>m;
    string x,s;
    cin>>x;
    cin>>s;
    int cnt = 0;
    
    while(x.find(s) == string::npos && x.length() < 25) {
        x = x + x;
        cnt++;
    }
    
    if(x.find(s) != string::npos) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }
  }
  rtn
}