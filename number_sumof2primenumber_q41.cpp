#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{
  if(n<=1)
  return false;
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    return false;
  }
  return true;
}
int main()
{
  int x;
  cin>>x;

  for(int i=2;i<=x/2;i++)
  {
    if(isprime(i) && isprime(x-i))
    {
      if(x==i+(x-i))
      {
        cout<<" can be represented as sum of two prime numbers";
        return 0;
      }
    }

  }
  cout<<"cant be represented ";
}