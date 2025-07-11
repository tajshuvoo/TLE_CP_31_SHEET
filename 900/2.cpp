#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;


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

    int k,n;
    cin>>n>>k;
    string s;
    cin>>s;

    int countLetters[26] ={0};
    
    for (size_t i = 0; i < s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            countLetters[s[i]-'a']++;
    }

    int cntOdd=0;
    for(int x: countLetters){
        if(x%2==1)
            cntOdd++;
    }

    
    if(cntOdd>k+1)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    

  }

  rtn
}