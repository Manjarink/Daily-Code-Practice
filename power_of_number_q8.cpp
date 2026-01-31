#include<iostream>
using namespace std;
int main()
{
    int base, expo;
    cin>>base>>expo;
    int res=1;
    for(int i=1;i<=expo;i++)
    {
        res*=base;
    }
    cout<<res;
    return 0;
    
}
