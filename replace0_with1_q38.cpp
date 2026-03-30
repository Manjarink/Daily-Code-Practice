#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x;
  cin>>x;
  int z=0,c=0;
  while(x!=0)
  {
    int k = x%10;
    if(k)
    {
      z=k*(int)pow(10,c++)+z;
    }else{
      z=1*(int)pow(10,c++)+z;
    }
    x/=10;
  }
  cout<<z;
}