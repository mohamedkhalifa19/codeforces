#include <iostream>
#include <map>
#include <vector>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    map<int,int>k;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        k[x]++;
    }
    bool f=0;
    for(auto l:k){
        if(l.second>=3)
        {
            cout<<l.first<<endl;
            f=1;
            break;
              }

    }
    if(f==0)
        cout<<-1<<endl;
}
}
