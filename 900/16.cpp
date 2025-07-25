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

    string s,t;
    cin>>s>>t;

    int n= s.size();
    int m = t.size();

    vector<int > freq_t(26,0);
    for (int i = 0; i < m; i++)
    {
        freq_t[t[i]-'A']++;
    }

    for (int i = n-1; i >= 0; i--)
    {
        if(freq_t[s[i]-'A']>0)
            freq_t[s[i]-'A']--;
        else s[i]='.';
    }
    string ans="";

    for (int i = 0; i < n; i++)
    {
        if(s[i]!='.')
            ans+=s[i];
    }
    
    if(ans==t)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    

  }

  rtn
}
