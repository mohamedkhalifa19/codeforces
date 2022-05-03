#include <iostream>
#include <map>
#include <vector>
#define ll long long
using namespace std;
int main()
{
  map<int,int>m;
  int x,n,t;
  cin>>n>>t;
  for(int i=1;i<=n;i++){
    cin>>x;
    m[x]++;
  }
  for(int i=1;i<=t;i++)
  cout<<m[i]<<endl;




}
