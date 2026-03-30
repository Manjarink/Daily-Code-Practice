#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  string n;
  cin>>n;
  int base = 16;
  int dec=0;
  for(int i=n.length()-1 ;i>=0 ;i--)
  {
    if(n[i]>='0' && n[i]<='9')
    {
      dec+=(n[i] - '0')*base;
    }else if(n[i]>='A' && n[i]<='F')
    {
      dec+=(n[i] - 'A')*base;
    }else if(n[i]>='a' && n[i]<='f')
    {
      dec+=(n[i] - 'a')*base;
    }
    base*=16;
  }
  cout<<dec;
  
}