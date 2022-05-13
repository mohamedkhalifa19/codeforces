#include <iostream>
#include <set>
#include<vector>
#include<sstream>
#define ll long long
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
void solve(int n,int m){
 bool f=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2!=0)cout<<"#";
            else if(i%2==0&&f==0){
                if(j==m){cout<<"#"; f=1;}
                else cout<<".";

            }
            else if(i%2==0&&f==1){
                if(j==1){cout<<"#";}
                else cout<<".";
                if(j==m) f=0;
            }
        }
        cout<<endl;
    }
}
int main()
{
    ios;
   int n,m; cin>>n>>m;
   solve(n,m);
}
