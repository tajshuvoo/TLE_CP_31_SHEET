#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <numeric>
#include <cmath>
#include <map>
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

    long long a,b,c;
    cin>>a>>b>>c;

    bool found = false;
    
    long long new_a = b - (c - b);
    if(!found && new_a >= a && new_a % a == 0 && new_a != 0) {
        found = true;
    }

    long long new_b = a + (c - a)/2;
    if(!found && new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0) {
        found = true;
    }

    long long new_c = a + 2*(b - a);
    if(!found && new_c >= c && new_c % c == 0 && new_c != 0) {
        found = true;
    }

    if(found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
  }

  rtn
}
