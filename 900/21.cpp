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

    string s;
    cin>>s;

    vector<int> digits_int;
    for(char c : s) {
        if(isdigit(c)) {
            digits_int.push_back(c - '0');
        }
    }
    
    int minimum = INT_MAX;  
    int n = s.length();
    
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = i-1; j >= 0; j--) {  
            if((digits_int[j]*10 + digits_int[i]) % 25 == 0) {
                minimum = min(minimum, (n-i-1) + (i-j-1));  
                break;  
            }
        }
    }

    cout << (minimum == INT_MAX ? -1 : minimum) << endl;

    
  }

  rtn
}
