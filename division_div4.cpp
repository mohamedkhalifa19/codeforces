#include <iostream>
#include <string.h>
#include <math.h>
#define ll long long
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--){
        cin>>n;
        if(n>=1900)
            cout<<"Division 1"<<endl;
            else if(1600<=n&&n<=1899)
                cout<<"Division 2"<<endl;
             else if( 1400<=n&&n<=1599)
                cout<<"Division 3"<<endl;
                else
                    cout<<"Division 4"<<endl;
        	}
}
