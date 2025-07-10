#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <numeric>
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

    int countTwo=0;
    countTwo= count(arr.begin(),arr.end(),2);
    int countOne=count(arr.begin(),arr.end(),1);
    int cnt=0;
    int flag=1;
    if (countOne==n)
    {
        cout<<1<<endl;
        flag=0;
    }else if(countTwo){
        for (size_t i = 0; i < n; i++)
        {
            if(arr[i]==2){
                cnt++;
                if(cnt==(countTwo-cnt)){
                    cout<<i+1<<endl;
                    flag=0;
                    break;
                }
            }
        }
    }
    if(flag)
    cout<<-1<<endl;
    
    
   
  }

  rtn
}