#include <iostream>
#include <string.h>
#include <vector>
#define ll long long
using namespace std;
int main()
{
int n,m,key;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
cin>>key;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(key==arr[i][j]){
            cout<<"will not take number"<<endl;
            return 0;
        }
    }
}
cout<<"will take number"<<endl;
}
