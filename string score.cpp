#include <iostream>
#include <algorithm>
#include<string>
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
int main()
{
   ios;
    long long n; cin>>n;
    string s; cin>>s;
    long long score=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='V')
            score+=5;
        else if(s[i]=='W')
            score+=2;
        else if(s[i]=='X'&&i<s.size()-1)
            s[i+1]='0';
        else if(s[i]=='Y'&&i<s.size()-1)
        {
            char x=s[i+1];
            s[i+1]='0';
            s.push_back(x);
        }
        else if(s[i]=='Z'&&i<s.size()-1){
            if(s[i+1]=='V'){
                score/=5;
                 s[i+1]='0';
    }
           else if(s[i+1]=='W'){
                score/=2;
             s[i+1]='0';
            }
        }
    }
    cout<<score;
}
