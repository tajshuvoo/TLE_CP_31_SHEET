#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <numeric>
#include <cmath>
#include <map>
using namespace std;

long long gcd(long long a, long long b) {

    if(b>a){
        long temp =a;
        a=b;
        b=temp;
    }
    while(b != 0) {
        long long temp = b;
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

        long long a,b;
        cin>>a>>b;

        
        long long g= abs(a-b);
        long long m = min(b%g ,g - b%g);

        if(a==b)cout<<0<<" "<<0<<endl;
        else cout<<g<<" "<<m<<endl;

    
    }

  rtn
}
