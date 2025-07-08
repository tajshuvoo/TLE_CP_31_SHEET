#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <numeric>
using namespace std;

#define rtn return 0;
#define vctr(n, name) vector<int> name(n);
#define vctr_init(n, name,init) vector<int> name(n,init);
#define vinp(n, name) for(int i = 0; i < n; i++) cin >> name[i];
#define vctr2dc(n, name) vector<vector<char> > name(n, vector<char>(n));
#define vctr2d(n, name) vector<vector<int> > name(n, vector<int>(n));
#define vinp2dc(n, name) for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> name[i][j];
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define vec(type, n, name) vector<type> name(n);
#define setarr(arr) set<int> set_arr(arr.begin(),arr.end());

int main() {
  FAST_IO
  int t;
  cin>>t;
  while(t--){
    
    int n;
    cin>>n;

    string num_str ;
    cin>>num_str;

    vector<int> arr;
    for(char c : num_str) {
        arr.push_back(c - '0'); 
    }
    
    int i=0,j=n-1;
    while(i < j){ 
        if((arr[i]==0 && arr[j]==1) || (arr[i]==1 && arr[j]==0)){
            n=n-2;
            ++i;
            --j;
        } else {
            break; 
        }
    }
    
    cout<<n<<endl;
  }

  rtn
}