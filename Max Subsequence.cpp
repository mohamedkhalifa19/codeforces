#include <iostream>
#include <map>
using namespace std;
int main()
{
 int n; cin>>n;
 string s;
 cin>>s;
        int ctr=1;
      for(int j=0;j<n-1;++j){
          if(s[j]!=s[j+1]){
            ctr++;
          }
  }
  cout<<ctr;
}
