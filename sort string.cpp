#include <iostream>
#include <map>
using namespace std;
int main()
{
map<char,int>k;
int n; cin>>n;
for(int i=0;i<n;i++){
    char x; cin>>x;
    k[x]++;
}
for(auto l:k){
for(int i=0;i<l.second;i++)
   cout<< l.first;
}
}