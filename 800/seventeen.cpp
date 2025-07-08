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
    int n,k,x;
    cin>>n>>k>>x;

    bool yesOrNo = false;
    int num;

    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for (size_t i = 0; i <n; i++)
            cout<<1<<" ";
        cout<<endl;
    }
    else{
        if(k==1)
            cout<<"NO"<<endl;
        else if(k==2){
            if(n%2==1)
                cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for (size_t i = 0; i <n/2; i++)
                    cout<<2<<" ";
                cout<<endl;
            }
        }else{
            if(n%2==1){
                cout<<"YES"<<endl;
                cout<<(n-3)/2 + 1<<endl;
                for (size_t i = 0; i <(n-3)/2; i++)
                    cout<<2<<" ";

                cout<<3<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for (size_t i = 0; i <n/2; i++)
                    cout<<2<<" ";
                cout<<endl;
            }
        }
    }

    }

  rtn
}