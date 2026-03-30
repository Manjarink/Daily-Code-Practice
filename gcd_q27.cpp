#include<iostream>
#include<cmath>
using namespace std;
int gcd(int n  , int m)
{
  return m == 0 ? n : gcd(m , n%m);
}
int main()
{
  int n,m;
  cin>>n>>m;
 cout<<gcd(n ,m);
}