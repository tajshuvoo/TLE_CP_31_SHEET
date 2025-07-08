#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rtn return 0;
#define vctr(size) vector<int> arr(size);
#define vctr(n, name) vector<int> name(n); 
#define vinp(n, name) for(int i = 0; i < n; i++) cin >> name[i];
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
  FAST_IO
  int t;
  cin >> t;
  while(t--){
    int n,x;
    cin>> n >>x;
    vctr(n,arr)
    vinp(n,arr)
    int minimum=0;
    for (size_t i = 0; i <= n; i++)
    {
        if(i==0)
            minimum= max(minimum,arr[i]-0);
        else if(i== n)
            minimum= max(minimum,2*(x-arr[i-1]));
        else
            minimum= max(minimum,arr[i]-arr[i-1]);
    }
    cout<<minimum<<endl;

  }
  
  rtn
}