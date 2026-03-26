#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int sum = 0 , s=0 ;
  for(int i = 1;i<n ;i++)
  {
    if(n%i==0)
    {
      sum+=i;
    }
  }
    for(int i = 1;i<m ;i++)
  {
    if(m%i==0)
    {
      s+=i;
    }
  }
  if(sum*m == s*n)
  {
    cout<<"Its a friendly pair";
  }else{
    cout<<"its not a friendly pair";
  }
}