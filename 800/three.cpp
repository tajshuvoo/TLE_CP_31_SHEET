#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rtn return 0;
#define vctr(size) vector<int> arr(size);
#define vctr(n, name) vector<int> name(n);
#define vinp(n, name) for(int i = 0; i < n; i++) cin >> name[i];
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define vec(type, n, name) vector<type> name(n);

int main() {
  FAST_IO
  int t;
  cin >> t;
  while(t--){
    int n;
    cin>>n;

    vec(char,n,arr)
    vinp(n,arr)

    string s(arr.begin(),arr.end());
    string sub ="...";
    if(s.find(sub) != string::npos)
        cout<<2<<endl;
    else{
        int count_l =count(arr.begin(),arr.end(),'.');
        cout<<count_l<<endl;
    }
    
  }
  
  rtn
}