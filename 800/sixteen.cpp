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

    vctr(n,arr)
    vinp(n,arr)
    vector<int> diff;
    bool is_sort = is_sorted(arr.begin(),arr.end());
    if(is_sort==false)
        cout<<0<<endl;
    else{
        for (size_t i = 1; i < n; i++)
        {
           diff.push_back(arr[i]-arr[i-1]);
        }
        
        int minimum =*min_element(diff.begin(),diff.end());
        cout<<minimum/2+1<<endl;
    }

    }

  rtn
}