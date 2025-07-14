#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


#define rtn return 0;
#define vctr(n, name) vector<int> name(n);
#define vctrll(n, name) vector<long long> name(n);
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

    long long n,q;
    cin>>n>>q;
    
    vctrll(n,arr)  
    vinp(n,arr)

    vctrll(n+1, pref)
    pref[0] = 0;
    for(int i = 0; i < n; i++) {
        pref[i+1] = pref[i] + arr[i];
    }
    
    while (q--)
    {
        long long l,r,k;
        cin>>l>>r>>k;

        long long partialSum = pref[r] - pref[l-1];

        long long ans = pref[n] - partialSum + (k*(r-l+1));

        if(ans%2==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
    

  }

  rtn
}
