#include <iostream>
#include <algorithm>
#include<vector>
#include<sstream>
#define ll long long
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
void solve(vector<int>&v,int n){
  int maxx=v[0];
 for(int i=1;i<n;i++)
 {
     if(maxx<=v[i]) maxx=v[i];
 }
 int sum=0;
 for(int i=0;i<n;i++){
    sum+=(maxx-v[i]);
 }
 cout<<sum<<endl;
}
int main()
{
    ios;
   int n; cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   solve(v,n);
}
