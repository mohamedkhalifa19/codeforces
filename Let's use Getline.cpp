#include <iostream>
#include <climits>
using namespace std;
int main()
{
string s;
getline(cin,s);
int len=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]==92)
    {
        break;
    }

    else
        cout<<s[i];
}

}
